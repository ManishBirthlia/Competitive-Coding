class Solution {
public:
    char findTheDifference(string s, string t){
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]++;
        for(auto &it:t){
            if(!mp.count(it) || !mp[it]) return it;
            mp[it]--;
        }
        return 'a';
    }
};