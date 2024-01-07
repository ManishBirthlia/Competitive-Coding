class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums){
        int ans=0,n=size(nums);
        if(n==1 || n==2 || n==3 && abs(nums[1]-nums[0])!=abs(nums[2]-nums[1])) return 0;
        for(int i=2;i<n;i++){
            for(int j=i-2;j>-1;j--){
                if(nums[j+1]-nums[j]==nums[i]-nums[i-1]) ans++;
                else break;
            }
        }
        return ans;
    }
};