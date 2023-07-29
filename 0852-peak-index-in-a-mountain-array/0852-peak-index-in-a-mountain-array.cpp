class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=size(arr)-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                start=mid;
            }else{
                end=mid;
            }
        }
        return mid;
    }
};