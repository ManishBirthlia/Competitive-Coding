class Solution {
public:
    int solve(int i,int &n,vector<int> &v,int &k,vector<vector<int>> &dp,int x){
        if(i>=n)return 0;
        if(dp[i][x]!=-1)return dp[i][x];
        int ans1 = solve(i+1,n,v,k,dp,x);
        int ans2 = 0;
        if(x){
            ans2 = -v[i]-k+solve(i+1,n,v,k,dp,0);
        }else{
            ans2 =  v[i]+solve(i+1,n,v,k,dp,1);
        }
        return dp[i][x] = max(ans1,ans2);
    }
    int maxProfit(vector<int>& v, int fee) {
        int n = v.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,n,v,fee,dp,1);
    }
    // int dfs(vector<int>& p, int f,int i,int buy,vector<vector<int>>& dp,int bu){
    //     if(i==size(p)) return 0;
    //     if(dp[i][bu]!=-1) return dp[i][bu];
    //     int a,b;
    //     if(buy==0){
    //         a=dfs(p,f,i+1,p[i],dp,0);
    //         b=dfs(p,f,i+1,buy,dp,0);
    //     }else{
    //         a=p[i]-buy-f>=0?p[i]-buy-f+dfs(p,f,i+1,0,dp,1):0;
    //         b=dfs(p,f,i+1,buy,dp,0);
    //     }
    //     return dp[i][bu]=max(a,b);
    // }
    // int maxProfit(vector<int>& prices, int fee){
    //     vector<vector<int>>dp(size(prices),vector<int>(2,-1));
    //     return dfs(prices,fee,0,0,dp,0);
    // }
};