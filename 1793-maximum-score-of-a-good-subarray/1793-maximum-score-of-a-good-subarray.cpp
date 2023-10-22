class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int f = nums[k], ans = f, s = 1, i = k - 1, j = k + 1;
        while (s < nums.size()) 
            f = min(f, i < 0 || nums[i] < nums[j] ? nums[j++] : nums[i--]),
            ans = max(ans, ++s*f);
        return ans;
    }
};