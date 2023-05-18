class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> a(n,0);
        vector<int> ans;
        for(auto it:edges) a[it[1]]++; 
        for(auto it:edges) if(a[it[0]]==0){ans.push_back(it[0]);a[it[0]]=1;} 
        return ans;
    }
};