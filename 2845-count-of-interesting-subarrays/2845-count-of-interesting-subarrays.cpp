class Solution {
public:
    # define ll long long
    long long countInterestingSubarrays(vector<int>& nums, int m, int k) {
        unordered_map<ll,ll>mp;
        mp[0]=1;
        ll ans=0,count=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]%m==k) count++;
            ans+=mp[(count-k+m)%m];
            mp[count%m]++;
        }
        return ans;
    }
};