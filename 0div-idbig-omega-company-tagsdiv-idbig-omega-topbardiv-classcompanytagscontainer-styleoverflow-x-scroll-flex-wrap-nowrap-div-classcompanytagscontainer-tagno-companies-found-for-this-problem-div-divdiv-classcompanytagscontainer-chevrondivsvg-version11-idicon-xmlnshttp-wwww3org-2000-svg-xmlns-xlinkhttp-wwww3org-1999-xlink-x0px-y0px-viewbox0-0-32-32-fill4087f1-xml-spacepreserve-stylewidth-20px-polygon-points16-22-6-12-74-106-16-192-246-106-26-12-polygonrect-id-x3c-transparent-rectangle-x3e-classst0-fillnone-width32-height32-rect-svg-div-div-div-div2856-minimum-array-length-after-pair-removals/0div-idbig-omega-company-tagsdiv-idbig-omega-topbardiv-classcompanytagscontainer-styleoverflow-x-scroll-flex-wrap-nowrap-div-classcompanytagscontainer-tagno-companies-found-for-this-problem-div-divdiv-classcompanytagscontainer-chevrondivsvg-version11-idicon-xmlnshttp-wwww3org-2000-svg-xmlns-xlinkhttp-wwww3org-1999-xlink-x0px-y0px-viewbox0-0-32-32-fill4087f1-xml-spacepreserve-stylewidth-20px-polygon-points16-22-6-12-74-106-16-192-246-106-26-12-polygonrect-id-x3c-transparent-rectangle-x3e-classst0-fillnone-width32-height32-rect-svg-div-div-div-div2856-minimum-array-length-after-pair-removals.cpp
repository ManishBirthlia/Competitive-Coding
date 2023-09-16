class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums) mp[it]++;
        priority_queue<int>pq;
        for(auto it:mp) pq.push(it.second);
        while(pq.size()>=2){
            int t1=pq.top();
            pq.pop();
            int t2=pq.top();
            pq.pop();
            if(--t1) pq.push(t1);
            if(--t2) pq.push(t2);
        }
        return pq.size()?pq.top():0;
    }
};