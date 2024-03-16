class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(), n1=0, n0=0, len=0;
        vector<int> mp(2*n+1, INT_MAX);
        mp[n]=-1;
        for(int i=0; i<n; i++){
            n1+=nums[i];
            n0=(i+1)-n1;
            len=max(len, i-mp[n1-n0+n]);
            mp[n1-n0+n]=min(i, mp[n1-n0+n]);
        } 
        return len;  
    }
};