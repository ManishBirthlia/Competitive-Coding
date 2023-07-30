class Solution {
public:
    bool dfs(vector<int>& nums,int start,int end,int p1=0,int p2=0,int p=1){
        if(start>end) return p1>=p2;
        if(p) return dfs(nums,start+1,end,p1+nums[start],p2,0) || dfs(nums,start,end-1,p1+nums[end],p2,0);
        return dfs(nums,start+1,end,p1,p2+nums[start],1) && dfs(nums,start,end-1,p1,p2+nums[end],1);
    }
    bool PredictTheWinner(vector<int>& nums) {
        return dfs(nums,0,size(nums)-1);
    }
};