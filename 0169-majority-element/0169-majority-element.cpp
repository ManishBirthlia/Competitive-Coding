class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1,ans=nums[0];
        for(int i=1;i<size(nums);i++){
            if(nums[i]==ans) count++;
            else count--;
            if(count<0){ 
                count=1;
                ans=nums[i];
            }
        }
        return ans;
    }
};