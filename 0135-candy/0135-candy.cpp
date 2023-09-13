class Solution {
public:
    int candy(vector<int>& r) {
        int ans=0;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<size(r);i++){
            pq.push({r[i],i});
            mp[i]=1;
        }
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int val=0;
            if(mp.count(it.second-1) && it.first>r[it.second-1]){
                val=max(val,mp[it.second-1]);
            }
            if(mp.count(it.second+1) && it.first>r[it.second+1]){
                val=max(val,mp[it.second+1]);
            }
            mp[it.second]=val+1;
        }
        for(auto it:mp) ans+=it.second;
        return ans;
    }
};