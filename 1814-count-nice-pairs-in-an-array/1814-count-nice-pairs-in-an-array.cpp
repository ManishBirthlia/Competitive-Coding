class Solution {
public:
    int rev(int n){
        string s = to_string(n);
        reverse(s.begin(),s.end());
        return stoi(s);
    }
    int countNicePairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size(); i++){
            nums[i] = nums[i] - rev(nums[i]);
            mp[nums[i]]++;
        }
        long long res = 0;
        for(auto &x:mp){
            res += 1LL * x.second * (x.second - 1) /2;
            res %= 1000000007;
        }
        return res;
    }
    // int m=1e9+7;
    // int reverse(int n,int ans=0){
    //     while(n){
    //         ans+=n%10;
    //         n/=10;
    //         if(n) ans*=10;
    //     }
    //     return ans;
    // }
    // int countNicePairs(vector<int>& nums) {
    //     unordered_map<int,int>mp;
    //     long long ans=0;
    //     for(auto it:nums) mp[abs(it-reverse(it))]++;
    //     for(auto it:mp){
    //         long long t=it.second,x=t*(t-1)/2;
    //         ans=(ans+x)%m;
    //     }
    //     return ans;
    // }
};