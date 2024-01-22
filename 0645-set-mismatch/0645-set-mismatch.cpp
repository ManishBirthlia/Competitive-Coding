class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans(2);
        for(auto it:nums) mp[it]++;
        for(int i=1;i<=size(nums);i++){
            if(mp.count(i) && mp[i]==2) ans[0]=i;
            else if(!mp.count(i)) ans[1]=i;
        }
        return ans;
    }
};