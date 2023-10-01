class Solution {
public:
    string reverseWords(string s) {
        int st=0,e;
        for(int i=0;i<size(s);i++){
            if(s[i]==' '){
                e=i-1;
                while(st<e){
                    swap(s[st],s[e]);
                    st++;
                    e--;
                }
                st=i+1;
            }
        }
        e=size(s)-1;
        while(st<e){
                    swap(s[st],s[e]);
                    st++;
                    e--;
        }
        return s;
    }
};