class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long res = 0;
        bool minFound = false, maxFound = false;
        int start = 0, minStart = 0, maxStart = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num < minK || num > maxK) {
                minFound = false;
                maxFound = false;
                start = i+1;
            }
            if (num == minK) {
                minFound = true;
                minStart = i;
            }
            if (num == maxK) {
                maxFound = true;
                maxStart = i;
            }
            if (minFound && maxFound) {
                res += (min(minStart, maxStart) - start + 1);
            }
        }
        return res;
        // int start=0,min_idx=-1,maxi=INT_MIN,mini=INT_MAX,ans=0;
        // for(int i=0;i<size(nums);i++){
        //     mini=min(mini,nums[i]);maxi=max(nums[i],maxi);
        //     if(nums[i]==mink && min_idx==-1) min_idx=i;
        //     if(mini<mink || maxi>maxk){
        //         mini=INT_MAX; maxi=INT_MIN; start=i+1; min_idx=-1;
        //     }else if(mini==mink && maxi==maxk) ans++;
        //     if(mini==mink && maxi==maxk && min_idx!=-1){
        //         ans+=(min_idx-start);min_idx=-1;
        //     }
        // }
        // return ans;
    }
};