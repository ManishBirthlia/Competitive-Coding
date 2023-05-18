class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,j=0;
        for(int i=1;i<size(nums);i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
                count=1;
            }else if(count==1 && nums[j]==nums[i]){
                j++;
                nums[j]=nums[i];
                count++;
            }
        }
        return j+1;
    }
};