class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>&nums,vector<int>temp,int i=0){
        if(i==size(nums)){
            ans.push_back(temp);
            return;
        }
        dfs(nums,temp,i+1);
        temp.push_back(nums[i]);
        dfs(nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums,{});
        return ans;
    }
};