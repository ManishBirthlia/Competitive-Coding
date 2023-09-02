class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int max_val = s.length() + 1;
        vector<int> dp(s.length() + 1, max_val);
        dp[0] = 0;
        unordered_set<string> dictionary_set(dictionary.begin(), dictionary.end());
        for (int i = 1; i <= s.length(); ++i) {
            dp[i] = dp[i - 1] + 1;
            for (int l = 1; l <= i; ++l) {
                if (dictionary_set.find(s.substr(i - l, l)) != dictionary_set.end()) {
                    dp[i] = min(dp[i], dp[i - l]);
                }
            }
        }
        return dp.back();
    }
    // int minExtraChar(string s, vector<string>& d){
    //     unordered_map<string,int>mp;
    //     unordered_map<int,int>ump;
    //     for(auto it:d) mp[it]=1;
    //     for(int i=0;i<size(s);i++){
    //         for(int j=0;j<=i;j++){
    //             string temp=s.substr(j,i-j+1);
    //             if(mp.count(temp)) for(int k=j;k<=i;k++) ump[k]=1;
    //         }
    //     }
    //     int ans=0;
    //     for(int i=0;i<size(s);i++) if(!ump.count(i)) ans++;
    //     return ans;
    // }
};