class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto i:arr) mp[i]++;
        for(auto it:mp){
            if(mp2.count(it.second)) return false;
            else mp2[it.second]=1;
        }
        return true;
    }
};