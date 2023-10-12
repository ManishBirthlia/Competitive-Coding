/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakele(MountainArray &mountainArr){
        int left=0;
        int right=mountainArr.length()-1;
        while(left<right){
            int mid=(left+right)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return left;
    }
    int lefthalf(int left,int right,int target,MountainArray &mountainArr){
        while(left<=right){
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
    int righthalf(int left,int  right,int target,MountainArray &mountainArr){
         while(left<=right){
            int mid=(left+right)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)>target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak=peakele(mountainArr);
        int left=lefthalf(0,peak,target,mountainArr);
        int right=righthalf(peak,mountainArr.length()-1,target,mountainArr);
        if(left==-1)return right;
        else if(right==-1)return left;
        return min(left,right);
    }
};