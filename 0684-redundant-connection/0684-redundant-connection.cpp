class Solution {
public:
    int u[1001];
    int Unionfind(int i){
        while(u[i]!=i) i=u[i];
        return i;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        for(int i=0;i<1001;i++) u[i]=i;
        for(auto it:edges){
            int f=Unionfind(it[0]),s=Unionfind(it[1]);
            if(f==s) return it;
            else u[s]=f;
        }
        return {-1,-1};
    }
};