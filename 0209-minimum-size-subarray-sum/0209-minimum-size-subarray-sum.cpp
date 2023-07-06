class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,sum=0,start=0,i;
        for(i=0;i<size(nums);i++){
            sum+=nums[i];
            if(sum>=target){
                while(sum>=target){
                    ans=min(ans,i-start+1);
                    sum-=nums[start];
                    start++;
                }
            }
        }
        if(sum>=target) ans=min(ans,i-start+1);
        if(ans!=INT_MAX) return ans;
        return 0;
    }
};