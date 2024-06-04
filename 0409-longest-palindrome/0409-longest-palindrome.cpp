class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)mp[i]++;
        int odd=0,ans=0;
        for(auto i:mp){
            if(i.second%2==0){
                ans+=i.second;
            }else{
                odd=1;
                ans+=max(0,i.second-1);
            }
        }
        if(odd==1) return ans+1;
        return ans;
    }
};