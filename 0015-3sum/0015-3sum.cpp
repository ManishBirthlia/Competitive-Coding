class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        map<vector<int>,int>temp;
        vector<vector<int>>ans;
        for(auto it:nums) mp[it]++;
        mp[nums[0]]--;
        for(int i=1;i<size(nums);i++){
            mp[nums[i]]--;
            for(int j=0;j<i;j++){
                int c=nums[j]+nums[i];
                if(mp.count(-c) && mp[-c]){
                    vector<int>tt={nums[j],nums[i],-c};
                    sort(tt.begin(),tt.end());
                    temp[tt]++;
                } 
            }
        }
        for(auto it:temp) ans.push_back(it.first);
        return ans;
    }
};