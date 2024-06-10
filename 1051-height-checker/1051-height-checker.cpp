class Solution {
public:
    int heightChecker(vector<int>& h) {
        priority_queue<int>pq(h.begin(),h.end());
        int ans=0;
        for(int i=size(h)-1;i>=0;i--){
            if(h[i] != pq.top()) ans++;
            pq.pop();
        }
        return ans;
    }
};