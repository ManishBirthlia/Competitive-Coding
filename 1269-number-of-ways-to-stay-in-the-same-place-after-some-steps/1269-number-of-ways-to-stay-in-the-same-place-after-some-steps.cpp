class Solution {
public:
    int m,steps;
    int md=1e9+7;
    int t(int s,int l,vector<vector<int>> &dp){
        if(s==0 && l==0) return 1;
        if(s<0 || l<0 || l>=min(steps/2+1,m)) return 0;
        if(dp[s][l]!=-1) return dp[s][l];
        int a=t(s-1,l,dp);
        int b=t(s-1,l-1,dp);
        int c=t(s-1,l+1,dp);
        return dp[s][l]=((a+b)%md+c)%md;
    }
    int numWays(int s, int l){
        vector<vector<int>> dp(s+1,vector<int> (min(s/2+1,l),-1));
        m=l;
        steps=s;
        return t(s,0,dp);
    }
};