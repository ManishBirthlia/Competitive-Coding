class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int d=*max_element(nums.begin(),nums.end()),ans=0,cnt=0;
        for(auto it:nums){
            if(it==d) cnt++;
            else{
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};