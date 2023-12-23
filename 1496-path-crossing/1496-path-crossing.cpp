class Solution {
public:
    bool isPathCrossing(string path) {
        vector<int>p={0,0};
        map<vector<int>,int>mp;
        mp[{0,0}]=1;
        for(auto it:path){
            if(it=='N') p[1]+=1;
            else if(it=='S') p[1]-=1;
            else if(it=='E') p[0]+=1;
            else p[0]-=1;
            if(mp.count(p)) return true;
            mp[p]++;
        }
        return false;
    }
};