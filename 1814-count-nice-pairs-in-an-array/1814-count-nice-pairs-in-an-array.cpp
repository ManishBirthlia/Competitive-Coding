class Solution {
public:
    int m=1e9+7;
    int reverse(int n,int ans=0){
        while(n){
            ans+=n%10;
            n/=10;
            if(n) ans*=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long ans=0;
        for(auto it:nums) mp[it-reverse(it)]++;
        for(auto it:mp){
            long long t=it.second;
            ans+=t*(t-1)/2;
            ans%=m;
        }
        return ans;
    }
};