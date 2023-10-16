class Solution {
public:
    vector<int> getRow(int r){
        vector<vector<int>>dp(r+1);
        dp[0]={1};
        for(int i=1;i<=r;i++){
            dp[i].push_back(1);
            for(int j=1;j<size(dp[i-1]);j++){
                    dp[i].push_back(dp[i-1][j]+dp[i-1][j-1]);
            }
            dp[i].push_back(1);
        }
        return dp[r];
    }
};