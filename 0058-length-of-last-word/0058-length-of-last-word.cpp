class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=size(s),ans=0,i;
        for(i=size(s)-1;i>=0;i--){
            if(s[i]==' '){
                ans=idx-i-1;
                idx=i;
            }
            if(ans>0) return ans;
        }
        ans=idx-i-1;
        return ans;
    }
};