class Solution {
public:
    int dp[1001];
    int minCostClimbingStairs(vector<int>& c){
        int size=c.size();
        dp[1]=c[0];
        dp[2]=min(c[0],c[1]);
        if(size==2) return dp[2];
        dp[3]=min(dp[2]+c[2],c[1]);
        for(int i=4;i<=size;i++){
            dp[i]=min(dp[i-2]+c[i-2],dp[i-1]+c[i-1]);
        }
        return dp[size];
    }
};