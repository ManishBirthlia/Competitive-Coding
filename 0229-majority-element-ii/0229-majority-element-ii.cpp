class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=size(nums);
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:nums) mp[it]++;
        for(auto [f,s]:mp) if(s>n/3) ans.push_back(f);
        return ans;
    }
};