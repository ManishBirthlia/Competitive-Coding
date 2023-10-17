class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& left, vector<int>& right) {
        vector<int>adj[n];
       vector<bool>visited(n,0);
        for(int i=0;i<n;i++){
         if(left[i]!=-1){
          if(visited[left[i]]){
            return false;
          }
          visited[left[i]]=1;
          adj[i].push_back(left[i]);
          }

         if(right[i]!=-1){
          if(visited[right[i]]){
            return false;
          }
          visited[right[i]]=1;
          adj[i].push_back(right[i]);
          }
        }
        int parent=-1;
        for(int i=0;i<visited.size();i++){
          if(visited[i]==0){
            parent=i;
          }
        }
        if(parent==-1){
          return false;
        }
        vector<bool>vis(n,0);
        queue<int>q;
        q.push(parent);
        while(!q.empty()){
          int node=q.front();
          vis[node]=1;
          q.pop();
          for(int i=0;i<adj[node].size();i++){
            q.push(adj[node][i]);
          }
        }
        for(auto it:vis){
          if(it==0){
            return false;
          }
        }
        return true;

    }
};