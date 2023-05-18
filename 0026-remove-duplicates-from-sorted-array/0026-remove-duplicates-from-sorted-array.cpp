class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int j=0;
        for(int i=1;i<size(nums);i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};