class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        priority_queue<int>pq;
        for(auto it:points) pq.push(it[0]);
        int ans=0,p=pq.top();
        while(!pq.empty()){
            ans=max(ans,abs(p-pq.top()));
            p=pq.top();
            pq.pop();
        }
        return ans;
    }
};