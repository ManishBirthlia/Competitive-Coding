class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:nums) mp[it]++;
        vector<int>ans;
        for(auto it:mp) 
        if(pq.size()>=k){
            pq.push({it.second,it.first});
            pq.pop();
        }else{
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};