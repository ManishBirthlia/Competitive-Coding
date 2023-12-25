class Solution {
public:
    map<int,int>mp;
    int numDecodingsRecursive(string s, int index) {
        if (index == s.length()) return 1;
        if (s[index] == '0') return 0;
        if(mp.count(index)) return mp[index];
        mp[index] = numDecodingsRecursive(s, index + 1);
        if (index + 1 < s.length() && (s[index] == '1' || (s[index] == '2' && s[index + 1] <= '6'))) 
            mp[index]+= numDecodingsRecursive(s, index + 2);
        return mp[index];
    }
    int numDecodings(string s) {
        return numDecodingsRecursive(s, 0);
    }
};