class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& preq,int count=0) {
        vector<int> ind(n,0),g[n];
        queue<int>q;
        for(auto it:preq) g[it[1]].push_back(it[0]);
        for(int i=0;i<n;i++) 
            for(int j=0;j<g[i].size();j++) 
                ind[g[i][j]]++;
        for(int i=0;i<n;i++) if(ind[i]==0) q.push(i);
        while(!q.empty()){
            int f=q.front();
            count++;
            q.pop();
            for(auto it:g[f]){
                ind[it]--;
                if(ind[it]==0) q.push(it);
            }
        }
        return count==n;
    }
};