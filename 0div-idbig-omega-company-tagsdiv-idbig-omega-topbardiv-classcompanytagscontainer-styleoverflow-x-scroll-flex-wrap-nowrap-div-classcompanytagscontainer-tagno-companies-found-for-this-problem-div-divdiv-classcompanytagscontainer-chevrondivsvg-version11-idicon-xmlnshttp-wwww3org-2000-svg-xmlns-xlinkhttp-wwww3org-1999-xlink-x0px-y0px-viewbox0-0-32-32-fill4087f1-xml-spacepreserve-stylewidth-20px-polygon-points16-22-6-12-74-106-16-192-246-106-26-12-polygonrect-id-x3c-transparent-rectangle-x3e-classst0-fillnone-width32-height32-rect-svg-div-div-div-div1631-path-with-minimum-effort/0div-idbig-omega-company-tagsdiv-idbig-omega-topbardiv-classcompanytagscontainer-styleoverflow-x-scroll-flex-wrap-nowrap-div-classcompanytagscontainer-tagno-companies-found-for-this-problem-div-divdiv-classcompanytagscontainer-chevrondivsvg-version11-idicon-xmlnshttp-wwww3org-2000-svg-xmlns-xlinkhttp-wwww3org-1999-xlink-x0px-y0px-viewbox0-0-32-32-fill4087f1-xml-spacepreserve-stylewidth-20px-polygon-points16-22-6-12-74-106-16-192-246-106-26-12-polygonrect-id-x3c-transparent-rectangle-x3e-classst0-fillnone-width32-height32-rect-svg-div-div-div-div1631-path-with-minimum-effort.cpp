class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        if(n ==1 && m == 1) return 0;
        vector<vector<int>> visited(n,vector<int>(m,INT_MAX));
        queue<vector<int>> tracker;
        tracker.push({0,0});
        int px[] = {0,-1,0,1};
        int py[] = {-1,0,1,0};
        visited[0][0] = 0;
        while(!tracker.empty()){
            auto it = tracker.front();
            tracker.pop();
            int x = it[0];
            int y = it[1];
            for(int i = 0;i<4;i++){
                int dx = x + px[i];
                int dy = y + py[i];
                if(dx < 0 || dx >= n || dy < 0 || dy >= m) continue;
                if(visited[dx][dy] <= visited[x][y]) continue;
                int effort = max(abs(heights[dx][dy] - heights[x][y]),visited[x][y]);
                visited[dx][dy] = min(visited[dx][dy],effort);
                tracker.push({dx,dy});
            }
        }
        return visited[n-1][m-1];
    }
};