class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<size(s) && j<size(t)){
            if(s[i]==t[j]) j++;
            i++;
        }
        return size(t)-j;
    }
};