class Solution {
public:
    int dirs[10] = {0, 1, 0, -1, 0, 1, 1, -1, -1, 1};
int find(vector<int> &ds, int i) {
    return ds[i] < 0 ? i : ds[i] = find(ds, ds[i]);
}
int latestDayToCross(int row, int col, vector<vector<int>>& cs) {
    vector<int> ds(row * col + 2, INT_MIN);
    int left = row * col, right = row * col + 1;
    ds[left] = ds[right] = - col;
    for (int idx = 0; idx < cs.size(); ++idx) {
        int i = cs[idx][0] - 1, j = cs[idx][1] - 1;
        ds[j * row + i] = j == 0 ? left : j == col - 1 ? right : -1;
        for (int d = 0; d < 9; ++d) {
            int x = i + dirs[d], y = j + dirs[d + 1];
            if (x < 0 || y < 0 || x >= row || y >= col || ds[y * row + x] == INT_MIN)
                continue;
            int p2 = find(ds, y * row + x), p1 = find(ds, j * row + i);
            if (p1 != p2) {
                if (ds[p1] > ds[p2])
                    swap(p1, p2);
                ds[p1] += ds[p2];
                ds[p2] = p1;
            }
        }
        if (find(ds, left) == find(ds, right))
            return idx;      
    }
    return -1;
}
};