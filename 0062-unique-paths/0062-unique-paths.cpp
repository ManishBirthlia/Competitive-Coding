class Solution {
public:
    vector<vector<int>>dp;
    int uniquePaths(int m, int n,int i=0,int j=0){
        if(i==0 && j==0) dp.assign(m,vector<int>(n,0));
        if(i == m-1 && j == n-1) return 1;
        else if(i==m || j==n) return 0;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j]=uniquePaths(m,n,i+1,j) + uniquePaths(m,n,i,j+1);
    }
};