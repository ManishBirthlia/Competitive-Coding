class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,e=size(s)-1;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
};