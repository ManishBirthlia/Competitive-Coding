class Solution {
public:
    vector<int>vis;
    bool dfs(vector<vector<int>>&g,int i,vector<int>&c,int n){
        if(!c[i]) return false;
        int count=1+size(g[i]);
        if(count!=n) return false;
        for(auto it:g[i]){
            if(!c[it]) return false;
        }
        if(vis[i]) return true;
        else vis[i]=1;
        bool check=true;
        for(auto it:g[i]) check=check&dfs(g,it,c,n);
        return check;
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vis.assign(n,0);
        vector<vector<int>>g(n);
        for(int i=0;i<size(edges);i++){
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>c(n,0);
            c[i]=1;
            for(auto it:g[i]) c[it]++;
            if(!vis[i] && dfs(g,i,c,size(g[i])+1)){
                ans++;
            }
        }
        return ans;
    }
};