class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int>mp={{'a',1},{'e',1},{'i',1},{'o',1},{'u',1},{'A',1},{'E',1},{'I',1},{'O',1},{'U',1}};
        vector<int>v;
        for(auto it:s) if(mp.count(it)) v.push_back(it);
        sort(v.begin(),v.end());
        for(int i=0,j=0;i<size(s);i++){
            if(mp.count(s[i])) s[i]=v[j++];
        }
        return s;
    }
};