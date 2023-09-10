class cmp{
    public:
    bool operator()(vector<int>&a,vector<int>&b){
        return a[2]>b[2];
    }
};
class Solution {
public:
    vector<int>set;
    void makeSet(vector<vector<int>>& p){
        for(int i=0;i<size(p);i++) set[i]=i;
    }
    int find(int i){
        while(set[i]!=i) i=set[i];
        return i;
    }
    int minCostConnectPoints(vector<vector<int>>& p){
        int n=size(p),ans=0,count=0;
        set.assign(n,0);
        makeSet(p);
        priority_queue<vector<int>,vector<vector<int>>,cmp>pq;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=abs(p[i][0]-p[j][0])+abs(p[i][1]-p[j][1]);
                pq.push({i,j,d});
            }
        }
        while(!pq.empty() && count<n-1){
            auto it=pq.top();
            pq.pop();
            int r1=find(it[0]),r2=find(it[1]);
            if(r1!=r2){
                set[r1]=r2;
                ans+=it[2];
                count++;
            }
        }
        return ans;
    }
};