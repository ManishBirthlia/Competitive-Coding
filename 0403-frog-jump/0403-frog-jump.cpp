class Solution {
public:
    unordered_map<int,int>mp;
    vector<vector<int>>dp;
    bool dfs(vector<int>&s,int i=0,int j=1){
        if(i==size(s)-1) return true;
        if(j<=0) return false;
        if(dp[i][j]!=-1) return dp[i][j];
        int jump=s[i]+j;
        bool ans=false;
        if(mp.count(jump)){
            ans=ans||dfs(s,mp[jump],j)||dfs(s,mp[jump],j-1)||dfs(s,mp[jump],j+1);
        } 
        return dp[i][j]=ans;
    }
    bool canCross(vector<int>& stones){
        dp.assign(2001,vector<int>(2001,-1));
        for(int i=0;i<size(stones);i++){
            mp[stones[i]]=i;
        }
        return dfs(stones);
    }
};