class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=0,mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                int start=i+1,end=j-1;
                while(start<=end){
                    int mid=(start+end)/2,sum=nums[i]+nums[j]+nums[mid];
                    if(abs(sum-target)<mini){
                        mini=abs(sum-target);
                        ans=sum;
                    }
                    if(sum>target) end=mid-1;
                    else start=mid+1;
                }
            }
        }
        return ans;
    }
};