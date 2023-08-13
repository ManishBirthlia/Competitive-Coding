class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int>s;
        int ans=INT_MAX;
        for(int i=x;i<size(nums);i++){
            s.insert(nums[i-x]);
            auto it=s.upper_bound(nums[i]);
            if(it!=s.begin()){
                ans=min(ans,nums[i]-*prev(it));
            }
            if(it!=s.end()){
                ans=min(ans,*it-nums[i]);
            }
        }
        return ans;
    }
};