class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return 1;
        vector<long long> dp;
        unordered_map<long long,long long> mp;
        sort(arr.begin(),arr.end());
        for(long long i = 0 ; i < n ; i++) {
            dp.push_back(1);
            mp[arr[i]] = i;
        }
        for(long long i = 1 ; i < n ; i++) {
            for(long long j = i - 1 ; j >= 0 ; j--) {
                if(arr[i] % arr[j] == 0) {
                    long long div = arr[i] / arr[j];
                    if(mp.find(div) != mp.end()) {
                        dp[i] += dp[mp[div]] * dp[j];
                    }
                }
            }
        }
        long long result = 0;
        for(long long i = 0 ; i < n ; i++) {
            result += dp[i];
        }
        return result % 1000000007;
    }
};