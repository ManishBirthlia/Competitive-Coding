class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<size(nums);i++){
            if(nums[i]!=nums[i-1]) ans.push_back(nums[i-1]);
            else i++;
        }
        if(ans.size()==1) ans.push_back(nums.back());
        return ans;
    }
};