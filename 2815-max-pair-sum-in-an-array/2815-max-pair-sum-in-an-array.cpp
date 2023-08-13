class Solution {
public:
    int maxSum(vector<int>& nums){
        int ans=0;
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<size(nums);j++){
                if(i!=j){
                    int m1=0,m2=0,a=nums[i],b=nums[j];
                    while(a){
                        m1=max(m1,a%10);
                        a/=10;
                    }
                    while(b){
                        m2=max(m2,b%10);
                        b/=10;
                    }
                    if(m1==m2) ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans==0?-1:ans;
    }
};