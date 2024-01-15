class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>a,b;
        unordered_map<int,int>mp;
        for(auto it:matches){
            mp[it[1]]++;
            if(!mp.count(it[0])) mp[it[0]]=0;
        }
        for(auto it:mp){
            if(!it.second) a.push_back(it.first);
            else if(it.second==1) b.push_back(it.first);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return {a,b};
    }
};