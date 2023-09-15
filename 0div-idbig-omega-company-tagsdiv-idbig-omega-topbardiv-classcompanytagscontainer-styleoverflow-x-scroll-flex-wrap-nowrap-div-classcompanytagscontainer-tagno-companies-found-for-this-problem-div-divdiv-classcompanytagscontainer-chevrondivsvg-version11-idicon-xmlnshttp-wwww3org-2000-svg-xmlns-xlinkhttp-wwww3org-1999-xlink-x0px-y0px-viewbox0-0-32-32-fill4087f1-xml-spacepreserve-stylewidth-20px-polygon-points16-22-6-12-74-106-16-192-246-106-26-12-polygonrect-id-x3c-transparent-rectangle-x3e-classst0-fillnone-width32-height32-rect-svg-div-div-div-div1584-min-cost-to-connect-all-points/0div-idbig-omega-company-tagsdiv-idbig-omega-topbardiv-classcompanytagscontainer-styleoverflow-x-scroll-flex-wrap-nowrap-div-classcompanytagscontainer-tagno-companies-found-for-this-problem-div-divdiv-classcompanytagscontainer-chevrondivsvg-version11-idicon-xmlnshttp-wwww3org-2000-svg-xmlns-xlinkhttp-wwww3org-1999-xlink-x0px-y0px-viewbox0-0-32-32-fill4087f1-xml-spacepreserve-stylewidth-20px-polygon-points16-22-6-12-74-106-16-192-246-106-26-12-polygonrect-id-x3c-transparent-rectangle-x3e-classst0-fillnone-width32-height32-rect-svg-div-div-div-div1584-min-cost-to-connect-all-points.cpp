class Solution {
public:
    vector<int>v;
    void makeSet(){
        for(int i=0;i<1000;i++) v.push_back(i);
    }
    int find(int i){
        while(v[i]!=i) i=v[i];
        return i;
    }
    int minCostConnectPoints(vector<vector<int>>& points){
        makeSet();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<size(points);i++) mp[i]=points[i];
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        for(int i=0;i<size(points);i++){
            for(int j=i+1;j<size(points);j++){
                int d=abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
                pq.push({d,i,j});
            }
        }
        int ans=0,n=0;
        while(!pq.empty()){
            if(n==size(points)-1) break;
            auto it=pq.top();
            pq.pop();
            int f1=find(it[1]),f2=find(it[2]);
            if(f1!=f2){
                n++;
                ans+=it[0];
                v[f1]=f2;
            }
        }
        return ans;
    }
};