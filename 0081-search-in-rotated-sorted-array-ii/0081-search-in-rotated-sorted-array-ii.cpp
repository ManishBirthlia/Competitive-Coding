class Solution {
public:
    bool s(vector<int>& nums,int t,int s,int e){
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==t) return true;
            if(t<nums[mid]) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
    bool search(vector<int>& nums, int t,int start=0,int end=0) {
        if(!end) end=size(nums)-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==t) return true;
            if(nums[mid]==nums[start] && nums[mid]==nums[end]){
                start++;
                end--;
            }else if(nums[mid]>=nums[start]){
                if(t>nums[mid] || t<nums[start]) start=mid+1;
                else{
                    return s(nums,t,start,mid-1);
                }
            }else{
                if(t<nums[mid] || t>nums[end]) end=mid-1;
                else{
                    return s(nums,t,mid+1,end);
                }
            }
        }
        return false;
    }
};