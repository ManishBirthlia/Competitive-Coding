class Solution {
public:
    string sortVowels(string s) {
        string v;
        for(int i=0;i<size(s);i++)
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            v+=s[i];
            s[i]='#';
        }
        sort(v.begin(),v.end());
        for(int i=0,j=0;i<size(s);i++){
            if(s[i]=='#') s[i]=v[j++];
        }
        return s;
    }
};