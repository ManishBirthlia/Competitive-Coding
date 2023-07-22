class Solution {
public:
    long long m=1e9 + 7;
    int solve(int n,int x,int i,vector<vector<int>>&dp){
        if(pow(i,x)>n || i>n) return 0;
        if(pow(i,x)==n) return 1;
        if(dp[n][i]!=-1) return dp[n][i];
        int a,b;
        a=solve(n-pow(i,x),x,i+1,dp);
        b=solve(n,x,i+1,dp);
        return dp[n][i]=(a+b)%m;
    }
    int numberOfWays(int n, int x){
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(n,x,1,dp);
    }
};