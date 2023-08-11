class Solution {
public:
    vector<vector<int>>dp;
    int dfs(int am,vector<int>& coins,int i){
        if(am<0 || i==size(coins)) return 0;
        else if(am==0) return 1;
        if(dp[i][am]!=-1) return dp[i][am];
        int a,b;
        a=dfs(am-coins[i],coins,i);
        b=dfs(am,coins,i+1);
        return dp[i][am]=a+b;
    }
    int change(int amount, vector<int>& coins) {
        dp.assign(size(coins),vector<int>(amount+1,-1));
        return dfs(amount,coins,0);
    }
};