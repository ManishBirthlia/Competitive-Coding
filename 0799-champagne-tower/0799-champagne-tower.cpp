class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double ans = 0, wine = poured;
        double glass[101][101];
        for(int i = 0; i < 101; i++){
            for(int j = 0; j < 101; j++)
                glass[i][j] = 0;
        }
        glass[0][0] = wine;
        for(int i = 0; i < 100; i++){
            for(int j = 0; j <= i; j++){
                double left = glass[i][j] - 1;
                if(left > 0){
                    glass[i+1][j] += left/2;
                    glass[i+1][j+1] += left/2;
                }

            }
        }
        return glass[query_row][query_glass] >= 1 ? 1 : glass[query_row][query_glass];
    }
};