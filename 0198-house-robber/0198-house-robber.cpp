class Solution {
public:
    int rob(vector<int>& nums){
        if(size(nums)==1) return nums[0];
        vector<int>dp(size(nums),0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<size(nums);i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[size(nums)-1];
    }
};