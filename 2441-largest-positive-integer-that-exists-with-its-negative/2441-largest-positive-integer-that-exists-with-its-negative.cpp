class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<size(nums);i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
        }
        int ans=INT_MIN;
        for(auto it:mp){
            if(mp.count(-it.first) && it.first>ans){
                ans=it.first;
            }
        }
         if(ans!=INT_MIN) return ans;
        return -1;
    }
};