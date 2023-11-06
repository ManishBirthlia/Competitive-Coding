class Solution {
public:
    int u[1001][2];
    int Unionfind(int i){
        while(u[i][0]!=i) i=u[i][0];
        return i;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for(int i=0;i<1001;i++) u[i][0]=i;
        for(auto it:edges){
            int f=Unionfind(it[0]),s=Unionfind(it[1]);
            if(f==s) return it;
            else{
                if(u[s][1]>u[f][1]){
                    u[f][0]=s;
                    u[f][1]++;
                }else{
                    u[s][0]=f;
                    u[s][1]++;
                }
            }
        }
        return {-1,-1};
    }
};