class Solution {
public:
    // int findCheapestPrice(int n, vector<vector<int>>& f, int s, int d, int k) {
    //     unordered_map<int,vector<pair<int, int>>> mp;
    //     for(int i=0;i<size(f);i++){
    //         mp[f[i][0]].push_back({f[i][1],f[i][2]});
    //     }
    //     priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
    //     pq.push({0,s,k+1});
    //     while(!pq.empty()){
    //         auto it=pq.top();
    //         pq.pop();
    //         int cost=it[0],curr=it[1],stop=it[2];
    //         if(curr==d) return cost;
    //         if(stop>0)
    //             for(auto i:mp[curr]) pq.push({cost+i.second,i.first,stop-1});
    //     }
    //     return -1;
    // }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<int> dist( n, INT_MAX );
        dist[src] = 0;
        for( int i=0; i <= K; i++ ) {
            vector<int> tmp( dist );
            for( auto flight : flights ) {
                if( dist[ flight[0] ] != INT_MAX ) {
                    tmp[ flight[1] ] = min( tmp[flight[1]], dist[ flight[0] ] + flight[2] );
                }
            }
            dist = tmp;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};