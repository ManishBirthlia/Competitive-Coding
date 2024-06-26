class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // Solved by Manish Kumar
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<size(nums);i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0) rem=rem+k;
            if(mp.count(rem)) ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }
};