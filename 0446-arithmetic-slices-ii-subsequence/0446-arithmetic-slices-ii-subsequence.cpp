class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int ans=0,n=size(nums);
        if(n==1 || n==2) return 0;
        vector<unordered_map<long long,int>>dp(n);
        for(int i=1;i<n;i++){
            for(int j=i-1;j>-1;j--){
                long long a=nums[i];
                long long b=nums[j];
                if(dp[j].count(a-b)){
                    ans+=dp[j][a-b];
                    dp[i][a-b]+=dp[j][a-b]+1;
                }else dp[i][a-b]++;
            }
        }
        return ans;
    }
};