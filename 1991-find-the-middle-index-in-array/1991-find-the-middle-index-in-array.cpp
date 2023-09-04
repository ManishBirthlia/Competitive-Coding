class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum=0,left_sum=0;
        for(auto it:nums) total_sum+=it;
        for(int i=0;i<size(nums);i++){
            int right_sum=total_sum-left_sum-nums[i];
            if(left_sum==right_sum) return i;
            left_sum+=nums[i];
        }
        return -1;
    }
};