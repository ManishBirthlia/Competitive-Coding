class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,int>mp;
        int sum=0,ans=INT_MAX,n=size(nums);
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            mp[sum]=i;
        }
        sum=0;
        if(mp.count(x)) ans=n-mp[x];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.count(x-sum) && mp[x-sum]>i){
                ans=min(ans,i+1+n-mp[x-sum]);
            }
            if(sum==x) ans=min(ans,i+1);
        }
        return ans==INT_MAX?-1:ans;
    }
};