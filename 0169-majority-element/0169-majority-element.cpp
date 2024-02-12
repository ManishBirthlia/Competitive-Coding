class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ans=0;
        for(auto it:nums){
            if(it!=ans) count--;
            else count++;
            if(count<0){
                count=0;
                ans=it;
            }
        }
        return ans;
    }
};