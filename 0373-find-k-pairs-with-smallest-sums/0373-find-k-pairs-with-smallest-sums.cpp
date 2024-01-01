class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
        int n = nums2.size();
        for(auto x : nums1){
            Q.push({x+nums2[0],0});
        }
        vector<vector<int>> ans;
        while(k && Q.size()){
            int ind = Q.top().second;
            int n2 = nums2[ind];
            int n1 = Q.top().first-n2;
            k--;
            ans.push_back({n1,n2});
            Q.pop();
            if(ind+1 < n){
                Q.push({n1+nums2[ind+1],ind+1});
            }
        }
        return ans;
    }
};