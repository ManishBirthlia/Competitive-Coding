class Solution {
public:
    vector<vector<int>>dp;
    int dfs(vector<int>&nums,int i,int p){
        if(i==size(nums)) return 0;
        if(p!=2500 && dp[i][p]!=-1) return dp[i][p];
        int a,b;
        if(p!=2500){
            if(nums[i]>nums[p]){
                a=1+dfs(nums,i+1,i);
                b=dfs(nums,i+1,p);
            }else return dfs(nums,i+1,p);
        }else{
            a=1+dfs(nums,i+1,i);
            b=dfs(nums,i+1,p);
        }
        return dp[i][p]=max(a,b);
    }
    int lengthOfLIS(vector<int>& nums){
        int n=size(nums);
        dp.assign(2500+1,vector<int>(2500+1,-1));
        return dfs(nums,0,2500);
    }
};