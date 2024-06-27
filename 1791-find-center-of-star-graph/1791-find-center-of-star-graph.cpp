class Solution {
public:
    int findCenter(vector<vector<int>>& e){
        if(e[0][0]==e[1][0] || e[0][0]==e[1][1]) return e[0][0];
        return e[0][1];
        //---------------- do again using graph algo..------------
        
        // unordered_map<int,int>mp;
        // for(auto it:e){
        //     mp[it[0]]++;
        //     mp[it[1]]++;
        // }
        // for(auto it:mp){
        //     if(it.second==mp.size()-1) return it.first;
        // }
        // return -1;
    }
};