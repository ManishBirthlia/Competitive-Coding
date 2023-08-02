class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>& nums,int i,vector<int>temp){
        if(i==size(nums)){
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<size(nums);j++){
            if(temp[j]==-11){
                temp[j]=nums[i];
                dfs(nums,i+1,temp);
                temp[j]=-11;
            } 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp(size(nums),-11);
        dfs(nums,0,temp);
        return ans;
    }
};