class Solution {
public:
    int dfs(vector<int>& p,int i,int buy,vector<vector<int>>&dp){
        if(i==size(p)) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        int a,b=INT_MIN;
        if(buy==1){
            a=dfs(p,i+1,buy,dp);
            b=-p[i]+dfs(p,i+1,0,dp);
        }else if(buy ==0){
            a=dfs(p,i+1,buy,dp);
            b=p[i]+dfs(p,i+1,2,dp);
        }else{
            a=dfs(p,i+1,1,dp);
        }
        return dp[i][buy]=max(a,b);
    }
    int maxProfit(vector<int>& prices) {
        int buy=1;
        vector<vector<int>>dp(size(prices)+1,vector<int>(4,-1));
        return dfs(prices,0,buy,dp);
    }
};