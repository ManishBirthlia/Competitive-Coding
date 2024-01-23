class Solution {
public:
    // **** Manish ****
    map<int,map<string,int>>dp;
    bool check(string s1,string s2){
        unordered_map<char,int>mp;
        for(auto it:s2){ 
            if(mp.count(it)) return false;
            else mp[it]++;
        }
        for(auto it:s1) if(mp.count(it)) return false;
        return true;
    }
    int dfs(vector<string>& arr,string s="",int i=0){
        if(i==size(arr)) return size(s);
        if(dp.count(i) && dp[i].count(s)) return dp[i][s];
        int a,b;
        a=dfs(arr,s,i+1);
        b=check(s,arr[i])?dfs(arr,s+arr[i],i+1):0;
        return dp[i][s]=max(a,b);
    }
    int maxLength(vector<string>& arr) {
       return dfs(arr); 
    }
};