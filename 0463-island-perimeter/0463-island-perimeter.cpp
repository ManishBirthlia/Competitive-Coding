class Solution {
public:
    int check(vector<vector<int>>& g,int i,int j){
        if(i<0 || j<0 || i==size(g) || j==size(g[i]) || g[i][j]==0) return 1;
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& g) {
        int ans=0;
        for(int i=0;i<size(g);i++){
            for(int j=0;j<size(g[i]);j++){
                if(g[i][j]==1){
                    int a=check(g,i+1,j),b=check(g,i-1,j),c=check(g,i,j+1),d=check(g,i,j-1);
                    ans+=a+b+c+d;
                } 
            }
        }
        return ans;
    }
};