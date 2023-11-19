class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1 , ans = 0 , mini = nums[0];
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i] == mini) return ans;
            if(nums[i] == nums[i-1]) cnt++;
            else{
               ans += cnt;
               cnt++;
            }
        }
        return ans;
    }
};