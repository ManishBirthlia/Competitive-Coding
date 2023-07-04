class Solution {
public:
    void dfs(vector<vector<char>>& g,int i,int j){
        if(i<0 || i>=size(g) || j<0 || j>=size(g[0]) || g[i][j]=='0') return;
        g[i][j]='0';
        dfs(g,i+1,j);
        dfs(g,i-1,j);
        dfs(g,i,j+1);
        dfs(g,i,j-1);
    }
    int numIslands(vector<vector<char>>& g) {
        int ans=0;
        for(int i=0;i<size(g);i++){
            for(int j=0;j<size(g[i]);j++){
                if(g[i][j]=='1'){
                    ans++;
                    dfs(g,i,j);
                }
            }
        }
        return ans;
    }
};