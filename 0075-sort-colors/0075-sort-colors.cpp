class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<size(nums);i++){
            for(int j=0;j<size(nums)-1;j++){
                if(nums[j]>nums[j+1] && i!=j){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};