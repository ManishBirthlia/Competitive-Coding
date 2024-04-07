class Solution {
public:
    int n;
    int dp[101][100];
    int f(int i, int balance, string& s){
        if (i==n) return balance==0;
        if (dp[i][balance]!=-1) return dp[i][balance];
        int ans=0;
        switch(s[i]){
            case '(': ans=f(i+1, balance+1, s); break;
            case ')': if (balance>0) ans=f(i+1, balance-1, s); break;
            case '*': 
                ans|=f(i+1, balance+1, s)||f(i+1, balance, s);
                if (balance>0) ans|=f(i+1, balance-1, s);
        }
        return dp[i][balance]=ans;
    }
    bool checkValidString(string& s) {
        n=s.size();
        memset(dp, -1, sizeof(dp));
        return f(0, 0, s)==1;
    }
};