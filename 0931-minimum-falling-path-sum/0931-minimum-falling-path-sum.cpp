class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mx) {
        int ans=INT_MAX,n=mx.size(),m=mx[0].size(),dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0) dp[i][j]=mx[i][j];
                else if(j==0) dp[i][j]=mx[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
                else if(j==m-1) dp[i][j]=mx[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
                else dp[i][j]=mx[i][j]+min(dp[i-1][j],min(dp[i-1][j+1],dp[i-1][j-1]));
            }
        }
        for(auto it:dp[n-1]) ans=min(ans,it);
        return ans;
    }
};