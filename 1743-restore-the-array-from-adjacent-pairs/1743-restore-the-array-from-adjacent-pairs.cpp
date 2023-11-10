class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        unordered_map<int,vector<int>>mp;
        unordered_map<int,int>vis;
        vector<int>ans;
        int start=0;
        for(auto it:a){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        for(auto it:mp) if(it.second.size()==1) start=it.first;
        while(!vis.count(start)){
            vis[start]=1;
            ans.push_back(start);
            for(auto it:mp[start]) if(!vis.count(it)) start=it;
        }
        return ans;
    }
};