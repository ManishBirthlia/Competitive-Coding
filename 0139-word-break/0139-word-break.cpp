class Solution {
public:
    bool find(string word,vector<string>& dict){
        for(auto it:dict) if(it==word) return true;
        return false;
    }
    bool wordBreak(string s, vector<string>& dict) {
        if(dict.size()==0) return false;
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    string word = s.substr(j,i-j);
                    if(find(word,dict)){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
    }
};