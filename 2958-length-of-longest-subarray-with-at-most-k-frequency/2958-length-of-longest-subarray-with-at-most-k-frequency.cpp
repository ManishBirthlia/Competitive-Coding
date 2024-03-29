class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0,start=0;
        unordered_map<int,int>mp;
        for(int i=0;i<size(nums);i++){
            mp[nums[i]]++;
            if(mp[nums[i]]<=k) ans=max(ans,i-start+1);
            while(mp[nums[i]]>k) mp[nums[start++]]--;
        }
        return ans;
    }
};