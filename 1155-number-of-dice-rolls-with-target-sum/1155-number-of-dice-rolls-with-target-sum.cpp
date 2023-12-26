class Solution {
public:
    vector<vector<int>>dp;
    int m=1e9 + 7;
    int dfs(int n,int k,int t){
        if(t==0 && n==0) return 1;
        else if(t<0 || n<0 || t<n) return 0;
        if(dp[t][n]!=-1) return dp[t][n];
        dp[t][n]=0;
        for(int x=1;x<=k;x++) dp[t][n]=(dp[t][n]+dfs(n-1,k,t-x))%m;
        return dp[t][n];
    }
    int numRollsToTarget(int n, int k, int t) {
        dp.assign(t+1,vector<int>(n+1,-1));
        return dfs(n,k,t);
    }
};