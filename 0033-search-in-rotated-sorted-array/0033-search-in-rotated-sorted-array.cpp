class Solution {
public:
    int s(vector<int>& nums,int t,int s,int e){
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==t) return mid;
            if(t<nums[mid]) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int t) {
        int start=0,end=size(nums)-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==t) return mid;
            if(nums[mid]>=nums[start]){
                if(t>nums[mid] || t<nums[start]) start=mid+1;
                else{
                    return s(nums,t,start,mid);
                }
            }else{
                if(t<nums[mid] || t>nums[end]) end=mid-1;
                else{
                    return s(nums,t,mid,end);
                }
            }
        }
        return -1;
    }
};