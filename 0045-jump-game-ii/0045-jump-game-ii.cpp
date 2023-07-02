class Solution {
public:
    int jump(vector<int>& nums) {
        int idx=0,ans=0,maxi=0;
        for(int i=0;i<size(nums);i++){
            if(i<=idx){
                maxi=max(maxi,i+nums[i]);
            }else{
                ans++;
                idx=maxi;
                maxi=max(maxi,i+nums[i]);
            }
        }
        return ans;
    }
};