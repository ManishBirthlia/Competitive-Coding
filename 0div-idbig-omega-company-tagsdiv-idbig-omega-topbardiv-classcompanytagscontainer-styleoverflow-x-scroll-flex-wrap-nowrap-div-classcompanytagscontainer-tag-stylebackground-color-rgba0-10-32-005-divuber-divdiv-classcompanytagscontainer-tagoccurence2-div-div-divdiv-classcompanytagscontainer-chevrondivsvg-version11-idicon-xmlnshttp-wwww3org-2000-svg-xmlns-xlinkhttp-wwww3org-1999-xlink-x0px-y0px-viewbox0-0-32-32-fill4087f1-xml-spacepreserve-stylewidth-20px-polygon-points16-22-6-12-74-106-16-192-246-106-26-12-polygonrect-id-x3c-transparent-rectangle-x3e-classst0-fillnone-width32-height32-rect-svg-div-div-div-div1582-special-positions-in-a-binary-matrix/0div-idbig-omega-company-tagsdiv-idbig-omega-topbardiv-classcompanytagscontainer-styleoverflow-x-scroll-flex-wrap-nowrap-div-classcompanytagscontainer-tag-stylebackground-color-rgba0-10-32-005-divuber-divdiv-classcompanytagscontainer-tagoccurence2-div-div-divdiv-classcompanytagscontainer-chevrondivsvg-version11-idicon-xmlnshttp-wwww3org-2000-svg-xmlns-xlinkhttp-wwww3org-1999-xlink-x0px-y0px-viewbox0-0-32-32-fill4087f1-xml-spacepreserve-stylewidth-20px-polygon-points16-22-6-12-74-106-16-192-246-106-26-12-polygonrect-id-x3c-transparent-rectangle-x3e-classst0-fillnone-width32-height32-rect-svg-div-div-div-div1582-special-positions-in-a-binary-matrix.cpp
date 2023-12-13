class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,int>row,col;
        int ans=0;
        for(int i=0;i<size(mat);i++){
            for(int j=0;j<size(mat[i]);j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<size(mat);i++){
            for(int j=0;j<size(mat[i]);j++){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};