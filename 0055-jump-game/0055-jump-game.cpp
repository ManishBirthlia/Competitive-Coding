class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx=0,ans=0,maxi=0;
        for(int i=0;i<size(nums);i++){
            if(i>idx && maxi>idx){
                idx=maxi;
                ans++;
            }else if(i>idx){
                return false;
            }
            maxi=max(maxi,i+nums[i]);
        }
        return ans>=0;
    }
};