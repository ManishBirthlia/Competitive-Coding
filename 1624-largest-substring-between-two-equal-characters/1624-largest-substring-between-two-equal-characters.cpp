class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<size(s);i++){
            if(mp.count(s[i])) ans=max(ans,i-mp[s[i]]-1);
            else mp[s[i]]=i;
        }
        return mp.size()==s.size()?-1:ans;
    }
};