class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<size(s);i++){
            if(s[i]<='Z' && s[i]>='A') temp+=s[i]+32;
            else if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9') temp+=s[i];
            else continue;
        }
        int st=0,e=size(temp)-1;
        while(st<e){
            if(temp[st]!=temp[e]) return false;
            st++;
            e--;
        }
        return true;
    }
};