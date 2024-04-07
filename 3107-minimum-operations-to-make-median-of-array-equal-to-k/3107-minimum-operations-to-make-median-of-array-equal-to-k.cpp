class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long idx=lower_bound(nums.begin(),nums.end(),k)-nums.begin(),ans=0,n=size(nums);
        if(idx>n/2) for(int i=n/2;i<idx;i++) ans+=abs(nums[i]-k);
        else for(int i=idx;i<=n/2;i++) ans+=abs(nums[i]-k);
        return ans;
    }
};