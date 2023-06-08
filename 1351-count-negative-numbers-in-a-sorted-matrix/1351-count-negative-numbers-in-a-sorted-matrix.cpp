class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int a=size(grid[0]);
        int b=size(grid);
        int x=0;
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                if(grid[i][j]<0){
                    x++;
                }
            }
        }
        return x;
    }
};