class Solution {
public:
    string largestOddNumber(string num) {
        string ans="",s="";
        for(auto it:num){
            s+=it;
            if((it-'0')%2!=0) ans=s;
        }
        return ans;
    }
};