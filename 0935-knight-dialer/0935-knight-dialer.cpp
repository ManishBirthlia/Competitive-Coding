class Solution {
public:
    int knightDialer(int n) {
        unordered_map<int, vector<int>> mp;
        int m = 1e9 + 7,sum=0;
        mp[0] = {4, 6};
        mp[1] = {6, 8};
        mp[2] = {7, 9};
        mp[3] = {4, 8};
        mp[4] = {9, 3, 0};
        mp[5] = {};
        mp[6] = {7, 1, 0};
        mp[7] = {2, 6};
        mp[8] = {1, 3};
        mp[9] = {4, 2};
        vector<vector<int>> dp(n, vector<int>(10, 0));
        for (int i = 0; i < 10; ++i) 
            dp[0][i] = 1; 
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < 10; ++j)
                for (int k = 0; k < mp[j].size(); ++k)
                    dp[i][j] = (dp[i][j] + dp[i - 1][mp[j][k]]) % m;
        for (int i = 0; i < 10; ++i)
            sum = (sum + dp[n - 1][i]) % m;
        return sum; 
    }
};