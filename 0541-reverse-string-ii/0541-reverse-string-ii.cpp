class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        while(i<size(s)){
            int st=i,e=i+k-1;
            if(e>=size(s)) e=size(s)-1;
            while(st<e){
                swap(s[st],s[e]);
                st++;
                e--;
            }
            i+=2*k;
        }
        return s;
    }
};