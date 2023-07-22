class Solution {
public:
    long long dfs(vector<int>&nums,int x,int i,int even,vector<vector<long long>>&dp){
        if(i==size(nums)) return 0;
        if(dp[i][even]!=-1) return dp[i][even];
        long long a,b;
        a=dfs(nums,x,i+1,even,dp);
        if(nums[i]%2==even) b=nums[i] + dfs(nums,x,i+1,even,dp);
        else b=nums[i]-x+dfs(nums,x,i+1,!even,dp);
        return dp[i][even]=max(a,b);
    }
    long long maxScore(vector<int>& nums, int x){
        vector<vector<long long>>dp(size(nums),vector<long long>(2,-1));
        return nums[0]+dfs(nums,x,1,nums[0]%2,dp);
    }
};