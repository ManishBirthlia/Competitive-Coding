class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,start=0,i=0,ans=INT_MAX;
        while(i<size(nums) || start<size(nums)){
            if(sum<target && i<size(nums)) {
                sum+=nums[i];
                i++;
            }
            if(sum>=target){
                ans=min(ans,i-start);
                sum-=nums[start];
                start++;
            }
            if(i==size(nums) && sum<target) break;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};