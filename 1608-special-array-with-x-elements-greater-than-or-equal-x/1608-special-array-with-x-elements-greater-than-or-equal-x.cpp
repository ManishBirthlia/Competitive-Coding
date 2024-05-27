class Solution {
public:
    int specialArray(vector<int>& nums) {
        int start=1,end=100,ans=-1;
        while(start<=end){
            int mid=(start+end)/2,count=0;
            for(auto it:nums)
                if(it>=mid) count++;
            if(count==mid){
                ans=mid;
                start=mid+1;
            }else if(count>mid) start=mid+1;
            else end=mid-1;
        }
        return ans;
    }
};