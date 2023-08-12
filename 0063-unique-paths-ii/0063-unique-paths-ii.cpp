class Solution {
public:
    vector<vector<int>>dp;
    int dfs(vector<vector<int>>& g,int i ,int j){
        if(i>=size(g) || j>=size(g[i]) || g[i][j]==1) return 0;
        else if(i==size(g)-1 && j==size(g[i])-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=dfs(g,i+1,j)+dfs(g,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        dp.assign(size(obstacleGrid),vector<int>(size(obstacleGrid[0]),-1));
        return dfs(obstacleGrid,0,0);
    }
};