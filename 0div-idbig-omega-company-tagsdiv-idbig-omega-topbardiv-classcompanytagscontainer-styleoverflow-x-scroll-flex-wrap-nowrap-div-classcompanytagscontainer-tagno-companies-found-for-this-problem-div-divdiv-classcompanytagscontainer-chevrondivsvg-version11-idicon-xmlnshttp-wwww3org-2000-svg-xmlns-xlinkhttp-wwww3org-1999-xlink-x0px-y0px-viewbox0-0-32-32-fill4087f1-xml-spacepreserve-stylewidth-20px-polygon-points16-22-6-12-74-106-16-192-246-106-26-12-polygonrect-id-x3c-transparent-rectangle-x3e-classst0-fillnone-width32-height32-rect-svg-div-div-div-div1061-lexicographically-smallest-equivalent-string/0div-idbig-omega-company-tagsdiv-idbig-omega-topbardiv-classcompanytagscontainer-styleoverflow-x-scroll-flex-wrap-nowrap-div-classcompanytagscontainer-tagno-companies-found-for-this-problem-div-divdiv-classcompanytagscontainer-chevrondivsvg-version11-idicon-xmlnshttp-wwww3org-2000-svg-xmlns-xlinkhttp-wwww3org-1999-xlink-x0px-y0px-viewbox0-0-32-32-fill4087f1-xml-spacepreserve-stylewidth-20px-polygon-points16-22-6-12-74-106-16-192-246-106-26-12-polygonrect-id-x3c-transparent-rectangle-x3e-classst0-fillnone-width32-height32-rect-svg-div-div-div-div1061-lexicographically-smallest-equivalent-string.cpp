class Solution {
public:
    vector<int>set;
    int find(int i){
        while(set[i]!=i) i=set[i];
        return i;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        string ans;
        for(int i=0;i<26;i++) set.push_back(i);
        for(int i=0;i<size(s1);i++){
            int fs1=find(s1[i]-'a'),fs2=find(s2[i]-'a'),sm=min(fs2,fs1);
            set[fs1]=sm;set[fs2]=sm;
        }
        for(int i=0;i<size(baseStr);i++){
            ans+=(find(baseStr[i]-'a')+'a');
        }
        return ans;
    }
};