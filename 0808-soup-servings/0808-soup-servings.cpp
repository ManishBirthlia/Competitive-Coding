class Solution {
public:
    unordered_map<int,unordered_map<int,double>>dp;
    double dfs(int i,int j){
        if(i<=0 && j<=0) return 0.5;
        else if(i<=0 && j>0) return 1;
        else if(j<=0 && i>0) return 0;
        if(dp.count(i) && dp[i].count(j)) return dp[i][j];
        double a,b,c,d;
        a=dfs(i-100,j);
        b=dfs(i-75,j-25);
        c=dfs(i-50,j-50);
        d=dfs(i-25,j-75);
        return dp[i][j] = 0.25*(a+b+c+d);
    }
    double soupServings(int n){
        if(n>=5000) return 1;
        return dfs(n,n);
    }
};