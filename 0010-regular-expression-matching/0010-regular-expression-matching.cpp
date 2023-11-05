class Solution {
public:
    bool isMatch(string s, string p){
        vector<vector<bool>> dp(s.length() + 1,vector<bool>(p.length() + 1, false));
        dp[0][0] = true;
        for (int j = 1; j <= p.length(); ++j) {
            if (p[j-1] == '*') {
                dp[0][j] = dp[0][j-2];
            }
        }
        for (int i = 1; i <= s.length(); ++i) {
            for (int j = 1; j <= p.length(); ++j) {
                if (s[i-1] == p[j-1] || p[j-1] == '.') {
                    dp[i][j] = dp[i-1][j-1];
                } else if (p[j-1] == '*') {
                    dp[i][j] = dp[i][j-2];
                    if (s[i-1] == p[j-2] || p[j-2] == '.') {
                        dp[i][j] = dp[i][j] || dp[i-1][j];
                    }
                }
            }
        }
        return dp[s.length()][p.length()];
    }
};