class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(size(nums)==1) return false;
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<size(nums);i++){
            sum+=nums[i];
            if(sum%k==0 && i) return true;
            if(mp.count(sum%k)){
                if(i-mp[sum%k]>=2) return true;
            }else{
                mp[sum%k]=i;
            }
        }
        return false;
    }
};