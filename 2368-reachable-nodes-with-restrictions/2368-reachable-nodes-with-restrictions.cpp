class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& e, vector<int>& r) {
        vector<int>v(n,0);
        queue<int>q;
        q.push(0);
        int count=0;
        vector<vector<int>>g(n);
        for(auto it:e){ 
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);          
        }
        for(auto it:r) v[it]=1;
        while(!q.empty()){
            int x=q.front();
            v[x]=1;
            q.pop();
            count++;
            for(auto it:g[x]){
                if(v[it]==0){
                    q.push(it);
                }
            }
            
        }
        return count;
    }
};