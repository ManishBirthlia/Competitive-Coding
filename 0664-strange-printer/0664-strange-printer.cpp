class Solution {
public:
    int strangePrinter(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        for(int i=0; i<n; i++)
            dp[i][i] = 1;
        for (int l = 2; l<n+1; l++)
        {
            for(int i=0; i<n-l+1; i++)
            {
                int j = i+l-1;
                //assuming all letters seprate
                dp[i][j] = dp[i+1][j]+1;
                
                for(int k=i+1; k<j+1; k++)
                {
                    if(s[i]==s[k])
                        dp[i][j] = min(dp[i][j], dp[i][k-1] + ((j>k)?dp[k+1][j]:0));
                }
            }
        }
        return dp[0][n-1];
    }
    // int strangePrinter(string s){
    //     int n=size(s);
    //     vector<vector<int>>dp(n,vector<int>(n,1));
    //     for(int i=n-1;i>=0;i--){
    //         for(int j=0;j<n;j++){
    //             if(i<j){
    //                 int mini=INT_MAX;
    //                 for(int k=i,x=i+1;k<j&&x<=j;k++,x++){
    //                     if(j-i==1 && s[j]==s[i]){
    //                         mini=min(mini,dp[i][k]);
    //                     }else{
    //                         mini=min(mini,dp[i][k]+dp[x][j]);
    //                     }
    //                 } 
    //                 dp[i][j]=mini;
    //             }
    //         }
    //     }
    //     return dp[0][n-1];
    // }
};