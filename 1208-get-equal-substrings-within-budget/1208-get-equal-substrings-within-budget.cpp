class Solution {
public:
    // Solved by Manish Birthlia
    int equalSubstring(string s, string t, int maxCost) {
        int start=0,end=0,ans=0;
        while(end<size(s)){
            if(maxCost>=abs(s[end]-t[end])){
                maxCost-=abs(s[end]-t[end]);
                end++;
                ans=max(ans,end-start);
            }else{
                maxCost+=abs(s[start]-t[start]);
                start++;
            }
        }
        return ans;
    }
};