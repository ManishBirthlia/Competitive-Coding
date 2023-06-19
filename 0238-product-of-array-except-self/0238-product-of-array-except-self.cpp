class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0,idx=-1,zero_product=1;
        vector<int>ans(size(nums),0);
        for(int i=0;i<size(nums);i++){
            if(!nums[i]){
                idx=i;
                zeros++;
            }else{
                zero_product*=nums[i];
            }
        }
        if(zeros>1) return ans;
        if(zeros==1){
            ans[idx]=zero_product;
            return ans;
        }else{
            for(int i=0;i<size(nums);i++){
                ans[i]=zero_product/nums[i];
            }
        }
        return ans;
    }
};