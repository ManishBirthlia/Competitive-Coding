class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        unordered_map<int, vector<int> >adj;
        vector<int> indegrees(n,0);
        for(int i = 0 ; i<relations.size() ; i++){
            int u = relations[i][0];
            int v = relations[i][1];
            adj[u-1].push_back(v-1);
            indegrees[v-1]++;
        }
        queue<int>q;
        vector<int> Maxtime(n,0);
        for(int i = 0 ; i <n ; i++){
            if(indegrees[i]==0){
            q.push(i);
            Maxtime[i] = time[i];
            }     
        }
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto nbr :adj[front]){
                indegrees[nbr]--;
                Maxtime[nbr] = max(Maxtime[nbr] ,Maxtime[front]+ time[nbr] );
                if(indegrees[nbr]==0) {
                    q.push(nbr);
                }
            }
        }
        int maxi = *max_element(Maxtime.begin(), Maxtime.end());
        return maxi;
        // vector<vector<int>>g(n+1);
        // unordered_map<int,int>mp;
        // for(auto it:r){
        //     g[it[0]].push_back(it[1]);
        //     mp[it[1]]++;
        // }
        // queue<int>q;
        // for(int i=1;i<=n;i++){
        //     if(!mp.count(i) || mp[i]==0) q.push(i);
        // }
        // q.push(-1);
        // while(!q.empty()){
        //     auto it=q.front();
        //     q.pop();
        //     if(it==-1){
        //         ans+=maxi;
        //         if(q.empty()) break;
        //         q.push(it);
        //         maxi=INT_MIN;
        //     }else{
        //         maxi=max(maxi,t[it-1]);
        //         for(auto x:g[it]){
        //             mp[x]--;
        //             if(mp[x]==0) q.push(x);
        //         }
        //     }
        // }
        // return ans;
    }
};
