class Solution {
public:
    vector<int>dx{0,0,1,-1};
    vector<int>dy{1,-1,0,0};
    vector<vector<int>>ans;
    void solve(int x,int y,int &r,int &c,int n,int m,vector<vector<int>>& v) {
        if(x<0 || y<0 || x>=n || y>=m || v[x][y]==0 || v[x][y]==2)
            return;
        v[x][y]=2;
        r=max(r,x);
        c=max(c,y);
        for(int i=0;i<4;i++) {
            solve(x+dx[i],y+dy[i],r,c,n,m,v);
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        ans.clear();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(v[i][j]==1) {
                    int r=0,c=0;
                    solve(i,j,r,c,n,m,v);
                    vector<int> t{i,j,r,c};
                    ans.push_back(t);
                }
            }
        } 
        return ans;
    }
};