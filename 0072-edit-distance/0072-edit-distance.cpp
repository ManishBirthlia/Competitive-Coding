class Solution {
public:
    int dfs(string &w1,string &w2,int i,int j,vector<vector<int>>&dp){
        if(i==size(w1) && j==size(w2)) return 0;
        else if(j==size(w2)) return size(w1)-i;
        else if(i==size(w1)) return size(w2)-j;
        if(dp[i][j]!=-1) return dp[i][j];
        int a,b,c=INT_MAX;
        if(w1[i]==w2[j]){
            a=1+dfs(w1,w2,i+1,j,dp);
            b=dfs(w1,w2,i+1,j+1,dp);
        }else{
            a=1+dfs(w1,w2,i,j+1,dp);
            b=1+dfs(w1,w2,i+1,j,dp);
            c=1+dfs(w1,w2,i+1,j+1,dp);
        }
        return dp[i][j]=min(a,min(b,c));
    }
    int minDistance(string word1, string word2){
        vector<vector<int>>dp(size(word1),vector<int>(size(word2),-1));
        return dfs(word1,word2,0,0,dp);
    }
};