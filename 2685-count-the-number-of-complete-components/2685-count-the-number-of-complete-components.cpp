class Solution {
public:
    void dfs(vector<vector<int>> &graph,int currNode,vector<bool> &vis,int &nodeCount,int &edgeCount) {
        vis[currNode] = true;
        nodeCount += 1;
        edgeCount += graph[currNode].size();
        for(int nextNode : graph[currNode]) {
            if(!vis[nextNode]) {
                dfs(graph,nextNode,vis,nodeCount,edgeCount);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(vector<int> &edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        int ans = 0;
        vector<bool> vis(n);
        for(int i = 0; i < n; i += 1) {
            int nodeCount = 0,edgeCount = 0;
            if(!vis[i]) {
                dfs(graph,i,vis,nodeCount,edgeCount);
                if(nodeCount*(nodeCount - 1) == edgeCount) ans += 1;
            }
        }
        return ans;
    }
    // void dfs(vector<vector<int>>&g,vector<int>&v,int i,int &count,int start){
    //     if(v[i] && i==start) count++;
    //     if(v[i]) return;
    //     v[i]=1;
    //     for(int j=0;j<size(g[i]);j++){
    //         dfs(g,v,g[i][j],count,start);
    //     }
    // }
    // int countCompleteComponents(int n, vector<vector<int>>& edges) {
    //     vector<vector<int>>g(n);
    //     vector<int>v(n,0);
    //     int count=0;
    //     for(int i=0;i<size(edges);i++){
    //         g[edges[i][0]].push_back(edges[i][1]);
    //         g[edges[i][1]].push_back(edges[i][0]);
    //     }
    //     for(int i=0;i<n;i++){
    //         if(!v[i]) dfs(g,v,i,count,i);
    //     }
    //     return count;
    // }
};