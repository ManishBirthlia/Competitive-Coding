class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx=0;
        for(int i=0;i<size(nums);i++){
            if(i>idx) return false;
            idx=max(idx,i+nums[i]);
        }
        return idx>=size(nums)-1;
    }
};