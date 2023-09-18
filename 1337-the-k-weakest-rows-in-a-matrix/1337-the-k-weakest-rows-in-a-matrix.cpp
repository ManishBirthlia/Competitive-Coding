class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>>v;
        vector<int>c;
        int a=0,b;
        for(int i=0;i<size(mat);i++){
            for(int j=0;j<size(mat[0]);j++){
                if(mat[i][j]!=1){
                    c.push_back(j);
                    c.push_back(i);
                    break;
                }
                if(j==size(mat[0])-1){
                    c.push_back(j+1);
                    c.push_back(i);
                }
            }
            v.push_back(c);
            c.clear();
        }
        sort(v.begin(),v.end());
        while(k>0){
            b=v[a][1];
            c.push_back(b);
            a++;
            k--;
        }
        return c;
    }
};