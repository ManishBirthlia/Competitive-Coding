class cmp{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        if(a.first!=b.first) return a>b;
        return a.second>b.second;
    }
};
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        vector<int>ans;
        for(auto it:arr) pq.push({__builtin_popcount(it),it});
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};