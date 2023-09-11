class Solution {
public:
    int set[1001];
    void makeSet(){
        for(int i=0;i<1000;i++) set[i]=i;
    }
    int find(int i){
        while(set[i]!=i) i=set[i];
        return i;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges){
        makeSet();
        for(auto it:edges){
            int pa=find(it[0]),pb=find(it[1]);
            if(pa!=pb){
                set[pa]=pb;
            }else return it;
        }
        return edges[2];
    }
};