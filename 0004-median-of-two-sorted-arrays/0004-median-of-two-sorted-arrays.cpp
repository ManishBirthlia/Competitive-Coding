class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it:nums2) nums1.push_back(it);
        sort(nums1.begin(),nums1.end());
        int n=size(nums1);
        if(n%2==0) return (nums1[n/2-1]+nums1[n/2])/2.0;
        return nums1[n/2];
    }
};