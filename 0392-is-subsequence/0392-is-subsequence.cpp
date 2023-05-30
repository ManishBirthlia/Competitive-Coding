class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<size(s) && j<size(t)){
            if(s[i]==t[j]) i++;
            j++;
        }
        return i==size(s);
    }
    // bool helper(string &s,int i,string &t,int j){
    //     if(i==size(s)) return true;
    //     else if(j==size(t)) return false;
    //     if(s[i]==t[j]){
    //         return helper(s,i+1,t,j+1);
    //     }else{
    //         return helper(s,i,t,j+1);
    //     }
    // }
    // bool isSubsequence(string s, string t) {
    //     return helper(s,0,t,0);
    // }
};