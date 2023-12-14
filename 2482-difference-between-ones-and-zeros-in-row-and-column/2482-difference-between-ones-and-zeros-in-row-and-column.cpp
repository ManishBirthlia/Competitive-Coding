class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat){
        int n=size(mat),m=size(mat[0]);
        unordered_map<int,int>row,col;
        vector<vector<int>>ans(n,vector<int>(m,0));
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
                ans[i][j]=2*(row[i]+col[j])-n-m;
            }
        }
        return ans;
    }
};