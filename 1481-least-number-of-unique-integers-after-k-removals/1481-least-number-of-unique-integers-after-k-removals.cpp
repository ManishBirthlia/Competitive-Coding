class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto it:arr) mp[it]++;
        for(auto it:mp) pq.push({-it.second,it.first});
        while(k){
            auto it=pq.top();
            if(k>=-it.first){
                mp.erase(it.second);
                k+=it.first;
            }else return mp.size();
            pq.pop();
        }
        return mp.size();
    }
};