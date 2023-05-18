class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=size(p),mini=p[0];
        vector<int> dp(n,0);
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1],p[i]-mini);
            mini=min(mini,p[i]);
        }
        return dp[n-1];
    }
};