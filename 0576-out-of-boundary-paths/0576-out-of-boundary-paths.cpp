class Solution {
public:
    int mod=1e9+7;
    unordered_map<int,unordered_map<int,unordered_map<int,int>>>dp;
    int findPaths(int &m, int &n, int max, int sr, int sc){
        if(sr<0 || sr>=m || sc<0 || sc>=n) return 1;
        else if(max==0) return 0;
        if(dp.count(sr) && dp[sr].count(sc) && dp[sr][sc].count(max)) return dp[sr][sc][max];
        long long a,b,c,d;
        a=findPaths(m,n,max-1,sr+1,sc);
        b=findPaths(m,n,max-1,sr-1,sc);
        c=findPaths(m,n,max-1,sr,sc+1);
        d=findPaths(m,n,max-1,sr,sc-1);
        return dp[sr][sc][max]=(a+b+c+d)%mod;
    }
};