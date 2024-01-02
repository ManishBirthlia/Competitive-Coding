class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<pair<map<int,int>,vector<int>>>v;
        vector<vector<int>>ans;
        for(auto it:nums){
            for(auto &i:v){
                if(!i.first.count(it)){
                    i.second.push_back(it);
                    i.first[it]++;
                    it=-1;
                    break;
                }
            }
            if(it!=-1) v.push_back({{{it,1}},{it}});
        }
        for(auto it:v) ans.push_back(it.second);
        return ans;
    }
};