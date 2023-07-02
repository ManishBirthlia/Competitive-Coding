class Solution {
public:
    int dfs(int n,vector<vector<int>>& req,vector<int>v,int ans=0,int i=0){
        if(i==size(req)){
            for(int i=0;i<n;i++){
                if(v[i]!=0) return 0;
            }
            return ans;
        }
        int a,b;
        a=dfs(n,req,v,ans,i+1);
        v[req[i][0]]--;
        v[req[i][1]]++;
        b=dfs(n,req,v,ans+1,i+1);
        return max(a,b);
    }
    int maximumRequests(int n, vector<vector<int>>& req) {
        vector<int>v(n,0);
        return dfs(n,req,v);
    }
};