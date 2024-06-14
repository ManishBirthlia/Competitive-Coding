class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int count =0;
         sort(nums.begin(),nums.end());
         for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                int diff=1;
                count+=diff;
                nums[i]=nums[i]+diff;
            }
            if(nums[i]<nums[i-1]){
                int diff=nums[i-1]-nums[i]+1;
                count+=diff;
                nums[i]=nums[i]+diff;
            }
         }
         return count;
        // unordered_map<int,int>mp;
        // sort(nums.begin(),nums.end());
        // int ans=0,curr=nums[0];
        // for(auto it:nums) mp[it]++;
        // for(auto it:nums){
        //     if(curr<it) curr=it;
        //     while(mp[it]!=1 && mp.count(curr)){
        //         curr++;
        //     }
        //     if(mp[it]!=1){
        //         mp[curr]++;
        //         ans+=curr-it;
        //     }
        //     mp[it]--;
        // }
        // return ans;
    }
};