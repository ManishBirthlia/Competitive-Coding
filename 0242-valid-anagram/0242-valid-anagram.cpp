class Solution {
public:
    bool isAnagram(string s, string t) {
        if(size(s)!=size(t))  return false;
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        for(auto it:t){
            if(!mp.count(it) || mp[it]==0) return false;
            else mp[it]--;
        }
        return true;
    }
};