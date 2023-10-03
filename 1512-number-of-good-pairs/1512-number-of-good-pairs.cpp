class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto it:nums) mp[it]++;
        for(auto [f,s]:mp) ans+=s*(s-1)/2;
        return ans;
    }
};