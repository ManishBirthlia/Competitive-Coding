class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it:arr) mp[it]++;
        for(auto it:mp) if(it.second>arr.size()/4) return it.first;
        return -1;
    }
};