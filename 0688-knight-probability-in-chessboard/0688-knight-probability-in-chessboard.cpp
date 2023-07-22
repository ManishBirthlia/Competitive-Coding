class Solution {
public:
    double dfs(int n, int k, int i, int j,vector<vector<vector<double>>>&dp){
        if(i<0 || i>=n || j<0||j>=n){
            return 0;
        }else if(k==0){
            return 1;
        }
        if(dp[i][j][k]) return dp[i][j][k];
        double total = 0+dfs(n,k-1,i-1,j-2,dp)+dfs(n,k-1,i+1,j-2,dp)
                        +dfs(n,k-1,i-1,j+2,dp)+dfs(n,k-1,i+1,j+2,dp)
                        +dfs(n,k-1,i-2,j-1,dp)+dfs(n,k-1,i-2,j+1,dp)
                        +dfs(n,k-1,i+2,j-1,dp)+dfs(n,k-1,i+2,j+1,dp);
        return dp[i][j][k]=total/8;
    }
    double knightProbability(int n, int k, int row, int column){
        vector<vector<vector<double>>>dp(27,vector<vector<double>>(27,vector<double>(102,0)));
        return dfs(n,k,row,column,dp);
    }
};