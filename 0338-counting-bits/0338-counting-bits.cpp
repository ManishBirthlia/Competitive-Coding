class Solution {
public:
    vector<int> countBits(int n){
        vector<int>dp(n+1);
        dp[0]=0;
        if(n==0) return dp;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                dp[i]=dp[i/2];
            }else{
                dp[i]=1+dp[i/2];
            }
        }
        return dp;
    }


    // void helper(int n,vector<int>&v){
    //     for(int i=0;i<=n;i++){
    //         v[i]=__builtin_popcount(i);
    //     }
    // }
    // vector<int> countBits(int n){
    //     vector<int>a(n+1,-1);
    //     helper(n,a);
    //     return a;
    // }
};