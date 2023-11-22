class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> mp;
        vector<int> res;
        for(int i=nums.size()-1; i>=0; i--){
            for(int j=0; j<nums[i].size(); j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        for(auto i: mp){
            for(int j=0; j<i.second.size(); j++){
                res.push_back(i.second[j]);
            }   
        }
        return res;
    }
};