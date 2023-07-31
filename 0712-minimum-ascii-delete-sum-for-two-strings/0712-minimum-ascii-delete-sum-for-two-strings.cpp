class Solution {
public:
    vector<vector<int>>dp;
    int dfs(string &s1,string &s2,int i,int j){
        if(i==size(s1) && j==size(s2)) return 0;
        else if(i==size(s1)) return s2[j]+dfs(s1,s2,i,j+1);
        else if(j==size(s2)) return s1[i]+dfs(s1,s2,i+1,j);
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dfs(s1,s2,i+1,j+1);
        int a,b;
        a=s1[i]+dfs(s1,s2,i+1,j);
        b=s2[j]+dfs(s1,s2,i,j+1);
        return dp[i][j] = min(a,b);
    }
    int minimumDeleteSum(string s1, string s2){
        int n=size(s1),m=size(s2);
        dp.assign(n,vector<int>(m,-1));
        return dfs(s1,s2,0,0);
    }
};