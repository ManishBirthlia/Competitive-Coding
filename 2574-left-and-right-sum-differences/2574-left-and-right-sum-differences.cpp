class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total_sum=0,left_sum=0;
        vector<int>ans(size(nums),0);
        for(auto it:nums) total_sum+=it;
        for(int i=0;i<size(nums);i++){
            int result=abs(2*left_sum+nums[i]-total_sum);
            left_sum+=nums[i];
            ans[i]=result;
        }
        return ans;
    }
};