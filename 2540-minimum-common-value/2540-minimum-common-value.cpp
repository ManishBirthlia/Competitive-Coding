class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int i=0;i<size(nums1);i++){
            mp[nums1[i]]++;
        }
        int ans=INT_MAX;
        for(int i=0;i<size(nums2);i++){
            if(mp.count(nums2[i])){
                ans=min(ans,nums2[i]);
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};