class Solution {
public:
    int numberOfMatches(int n,int ans=0) {
        if(n<=1) return ans;
        else if(n%2==0) return  numberOfMatches(n/2,ans+n/2);
        return numberOfMatches((n-1)/2+1,ans+(n-1)/2);
    }
};