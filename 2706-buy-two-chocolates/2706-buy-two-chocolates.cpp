class Solution {
public:
    int buyChoco(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        if(m-p[0]-p[1]>=0) return m-p[0]-p[1];
        return m;
    }
};