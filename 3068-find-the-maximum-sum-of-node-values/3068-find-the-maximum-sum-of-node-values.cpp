class Solution {
public:
    long maximumValueSum(std::vector<int>& nums, int k, std::vector<std::vector<int>>& edges) {
        int n = nums.size();
        std::vector<int> diff(n);
        long sum = 0;

        for (int i = 0; i < n; ++i) {
            diff[i] = (nums[i] ^ k) - nums[i];
            sum += nums[i];
        }

        std::sort(diff.begin(), diff.end(), std::greater<int>());

        for (int i = 0; i < n; i += 2) {
            if (i + 1 == n) return sum;
            int pair = diff[i] + diff[i + 1];
            if (pair > 0) sum += pair;
        }

        return sum;
    }
};