class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,temp=0,count=0,prev=-1;
        for(int i=0;i<size(nums);i++){
            if(prev==-1){
                if(nums[i]==1){
                    prev=1;
                    temp++;
                }
            }else if(nums[i]==0 && count==1){
                ans=max(ans,temp);
                temp=prev;
                count=1;
                prev=0;
            }else if(nums[i]==0){
                count++;
                prev=0;
            }else if(nums[i]==1){
                prev++;
                temp++;
            }
        }
        ans=max(ans,temp);
        if(ans==size(nums)) return ans-1;
        return ans;
    }
};