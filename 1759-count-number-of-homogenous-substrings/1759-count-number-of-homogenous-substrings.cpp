class Solution {
public:
    int m=1e9+7;
    int countHomogenous(string s) {
        long long count=1,ans=0;
        for(int i=1;i<=size(s);i++){
            if(i==size(s) || s[i]!=s[i-1]){ans+=(count*(count+1)/2)%m;count=1;}  
            else count++;
        }
        return ans;
    }
};