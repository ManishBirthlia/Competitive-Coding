class Solution {
public:
    long long m=1e9+7;
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long,long long>mp;
        long long ans=0;
        for(auto it:nums){ 
            string s=to_string(it);
            reverse(s.begin(),s.end());
            long long rev=stoi(s);
            mp[it-rev]++;
        }
        for(auto it:mp){
            ans=(ans+(it.second)*(it.second-1)/2)%m;
        }
        return ans;
    }
};