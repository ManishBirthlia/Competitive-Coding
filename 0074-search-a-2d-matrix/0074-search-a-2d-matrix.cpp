class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int a;
        for(int i=0;i<size(m);i++){
            a=lower_bound(m[i].begin(),m[i].end(),t)-m[i].begin();
            if(a>=size(m[i])) continue;
            if(m[i][a]==t){
                return true;
            }
        }
        return false;
    }
};