class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a,b,n=size(nums);
        a=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        b=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        a+=a>=n?-1:0;
        a+=a<0?1:0;
        if(!n || nums[a]!=target) return {-1,-1};
        return {a,b-1};
    }
};