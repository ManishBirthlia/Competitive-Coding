class Solution {
public:
    vector<vector<int>>dp;
    int dfs(string &s, string &t, int i=0, int j=0){
        if(i==size(s) || j==size(t)) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int a,b,c;
        if(s[i]==t[j]) a=1+dfs(s,t,i+1,j+1);
        else a=0;
        b=dfs(s,t,i+1,j);
        c=dfs(s,t,i,j+1);
        return dp[i][j]=max(a,max(b,c));
    }
    int longestCommonSubsequence(string text1, string text2) {
        dp.assign(size(text1),vector<int>(size(text2),-1));
        return dfs(text1,text2);
    }
};