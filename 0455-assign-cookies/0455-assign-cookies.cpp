class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int ans=0,i,j;
        for(i=0,j=0;i<size(s) && j<size(g);i++,j++){
            if(s[i]>=g[j]) ans++;
            else i--;
        }
        return ans;
    }
};