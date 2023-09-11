class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        map<int,vector<int>>mp;
        for(int i=0;i<size(g);i++){
            mp[g[i]].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto it:mp){
            vector<int>temp;
            for(int i=0;i<size(it.second);i++){
                temp.push_back(it.second[i]);
                if(i%it.first==it.first-1){
                    ans.push_back(temp);
                    temp.clear();
                }
            }
        }
        return ans;
    }
};