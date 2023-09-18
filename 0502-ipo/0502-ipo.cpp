class cmp{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        if(a.first!=b.first) return a.first>b.first;
        return a.second<=b.second;
    }
};
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int ans=w;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        priority_queue<int>maxi;
        for(int i=0;i<size(p);i++) pq.push({c[i],p[i]});
        while(k){
            while(!pq.empty() && pq.top().first<=w){
                auto it=pq.top();
                maxi.push(it.second);
                pq.pop();
            }
            if(!maxi.empty()){
                w+=maxi.top();
                ans+=maxi.top();
                maxi.pop();
            }
            k--;
        }
        return ans;
    }
};