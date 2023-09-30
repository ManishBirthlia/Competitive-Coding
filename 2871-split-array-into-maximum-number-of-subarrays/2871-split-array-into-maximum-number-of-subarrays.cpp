class Solution {
public:
    int maxSubarrays(vector<int>& nums){
        int j=nums[0],res=0;
        for(int i=0;i<size(nums);i++){
            j&=nums[i];
            if(j==0){
                res++;
                if(i+1<size(nums)) j=nums[i+1];
            }
        }
        return res==0?1:res;
    }
};