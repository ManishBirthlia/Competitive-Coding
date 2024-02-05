class Solution {
public:
    int firstUniqChar(string s) {
        int index=-1;
        unordered_map<char,int>mp;
        for(int i=0;i<size(s);i++){
            mp[s[i]]++;
        }
        for(int i=0;i<size(s);i++){
            if(mp[s[i]]==1) return i;
        }
        return -1;
    }
};