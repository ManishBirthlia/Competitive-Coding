class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum=0,n=size(nums),pre=0;
        vector<int>ans(n,0);
        for(auto it:nums) sum+=it;
        for(int i=0;i<n;i++){
            ans[i]=abs(i*nums[i]-pre)+abs((n-i)*nums[i]+pre-sum);
            pre+=nums[i];
        }
        return ans;
    }
};