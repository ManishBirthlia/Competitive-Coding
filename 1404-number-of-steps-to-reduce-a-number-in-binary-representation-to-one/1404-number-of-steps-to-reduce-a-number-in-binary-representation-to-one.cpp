class Solution {
public:
    int numSteps(string s) {
        int ans=0,end=size(s)-1,count=0;
        while(end>0){
            if(count) s[end]=s[end]=='1'?'0':'1';
            if(s[end]=='1'){
                ans+=2;
                count++;
            }else{
                ans++;
            } 
            end--;
        }
        if(count) ans++;
        return ans;
    }
};