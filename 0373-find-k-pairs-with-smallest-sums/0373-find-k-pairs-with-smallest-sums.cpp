class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<size(nums1);i++){
            for(int j=0;j<size(nums2);j++){
                if(i==size(nums1)) break;
                if(pq.size()<k) pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                else{
                    if(pq.top().first>nums1[i]+nums2[j]){
                        pq.pop();
                        pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                    }else if(pq.top().first<=nums1[i]+nums2[j]){
                        if(j==0) break;
                        i++;
                        j=-1;
                    }
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