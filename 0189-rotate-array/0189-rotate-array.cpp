class Solution {
public:
    void r(vector<int>& nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int start=0,end=size(nums)-1;
        r(nums,start,end);
        start=k%(end+1);
        r(nums,0,start-1);
        r(nums,start,end);
    }
};