class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mx) {
        int ans=INT_MAX,n=mx.size(),m=mx[0].size(),dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mini=INT_MAX;
                if(i) for(int k=0;k<m;k++) if(k!=j) mini=min(mini,dp[i-1][k]);
                if(i==0) dp[i][j]=mx[i][j];
                else dp[i][j]=mx[i][j]+mini;
            }
        }
        for(auto it:dp[n-1]) ans=min(ans,it);
        return ans;
    }
};