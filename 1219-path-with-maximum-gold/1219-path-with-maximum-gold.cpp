class Solution {
public:
    bool isValid(int i, int j, int m, int n){
        return i >= 0 and i < m and j >= 0 and j < n;
    }
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int solve(int i, int j, vector<vector<int>> &vis, vector<vector<int>> &grid){
        if (!isValid(i, j, vis.size(), vis[0].size()) or vis[i][j])
            return 0;
        vis[i][j] = 1;
        int ans = 0;
        for (int k = 0; k < dx.size(); k++){
            int x = i + dx[k];
            int y = j + dy[k];
            ans = max(ans, solve(x, y, vis, grid));
        }
        vis[i][j] = 0;
        return ans + grid[i][j];
    }
    int getMaximumGold(vector<vector<int>> &grid){
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (!grid[i][j])
                    vis[i][j] = 1;
        int ans = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j]){
                    vector<vector<int>> newVis = vis;
                    ans = max(ans,solve(i, j, newVis, grid));
                }
            }
        }
        return ans;
    }
};