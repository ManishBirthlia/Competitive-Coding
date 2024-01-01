class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& n1, vector<int>& n2, int k) {
        priority_queue<vector<int>>pq;
        vector<vector<int>>ans;
        for(auto i:n1){
            for(auto j:n2){
                if(pq.size()<k) pq.push({i+j,i,j});
                else if(pq.top()[0]>i+j){
                    pq.pop();
                    pq.push({i+j,i,j});
                }else if(pq.top()[0]<=i+j && pq.size()==k) break;
            }
        }
        while(k--){
            auto it=pq.top();
            ans.push_back({it[1],it[2]});
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};