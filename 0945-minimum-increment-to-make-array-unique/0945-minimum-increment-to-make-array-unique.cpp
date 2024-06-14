class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        int ans=0,curr=nums[0];
        for(auto it:nums) mp[it]++;
        for(auto it:nums){
            if(curr<it) curr=it;
            while(mp[it]!=1 && mp.count(curr)){
                curr++;
            }
            if(mp[it]!=1){
                mp[curr]++;
                ans+=curr-it;
            }
            mp[it]--;
        }
        return ans;
    }
};