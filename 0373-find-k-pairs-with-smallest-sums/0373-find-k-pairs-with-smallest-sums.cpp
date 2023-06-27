class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        vector<vector<int>>ans;
        for(int i=0;i<size(nums1);i++){
            for(int j=0;j<size(nums2);j++){
                if(pq.size()<k){
                    pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                }else if(pq.top().first>nums1[i]+nums2[j]){
                    pq.pop();
                    pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                }else{
                    break;
                }
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};