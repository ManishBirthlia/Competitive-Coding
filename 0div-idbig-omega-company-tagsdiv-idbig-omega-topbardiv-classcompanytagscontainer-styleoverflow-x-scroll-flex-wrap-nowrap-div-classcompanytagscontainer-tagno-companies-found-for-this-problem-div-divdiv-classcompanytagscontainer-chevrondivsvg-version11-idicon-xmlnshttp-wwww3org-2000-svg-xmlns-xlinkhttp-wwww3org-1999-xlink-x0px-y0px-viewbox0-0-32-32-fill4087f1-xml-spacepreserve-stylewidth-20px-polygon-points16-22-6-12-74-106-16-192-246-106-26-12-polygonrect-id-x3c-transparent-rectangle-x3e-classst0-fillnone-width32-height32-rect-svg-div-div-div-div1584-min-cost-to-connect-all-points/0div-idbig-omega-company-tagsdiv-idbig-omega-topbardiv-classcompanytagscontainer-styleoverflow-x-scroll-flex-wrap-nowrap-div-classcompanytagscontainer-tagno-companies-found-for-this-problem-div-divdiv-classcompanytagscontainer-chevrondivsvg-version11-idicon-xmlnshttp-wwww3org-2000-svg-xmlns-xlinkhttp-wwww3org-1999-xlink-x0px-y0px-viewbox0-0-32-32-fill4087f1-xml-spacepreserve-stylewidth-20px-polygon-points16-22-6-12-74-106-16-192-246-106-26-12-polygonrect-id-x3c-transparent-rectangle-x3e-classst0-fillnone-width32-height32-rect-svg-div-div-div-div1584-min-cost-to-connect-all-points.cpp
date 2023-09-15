class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& ps) {
        int n=size(ps),i=0,count=0,res=0;
        vector<bool>v(n,false);
        priority_queue<pair<int,int>>pq;
        while(++count<n){
            v[i]=1;
            for(int j=0;j<n;j++) if(!v[j]) pq.push({-abs(ps[i][0]-ps[j][0])-abs(ps[i][1]-ps[j][1]),j});
            while(v[pq.top().second]) pq.pop();
            res-=pq.top().first;
            i=pq.top().second;
            pq.pop();
        }
        return res;
    }
};