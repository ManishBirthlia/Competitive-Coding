class Solution {
public:
    int maxScore(string s) {
        int z=0,o=0,ans=0;
        for(auto it:s) if(it=='1') o++;
        for(int i=0;i<size(s);i++){
            if(i!=0) ans=max(ans,z+o);
            if(s[i]=='0') z++;
            else o--;
        }
        return ans;
    }
};