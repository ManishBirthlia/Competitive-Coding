class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=size(arr)-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(mid==0 && arr[mid]<arr[mid+1]){
                s=mid+1;
            }else if(mid==0 && arr[mid]>arr[mid+1]){
                break;
            }else if(mid==size(arr)-2 && arr[mid]<arr[mid+1]){
                mid=size(arr)-1;
                break;
            }else if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                break;
            }else if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return mid;
    }
};