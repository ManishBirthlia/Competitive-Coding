class Solution {
public:
    int minOperations(vector<int>& nums) {
        int len = nums.size();
        unordered_set<int> unique_nums(nums.begin(), nums.end());
        nums.assign(unique_nums.begin(), unique_nums.end());
        sort(nums.begin(), nums.end());
        int tail = 0;
        int maxi = INT_MIN;
        for (int head = 0; head < nums.size(); head++) {
            while (tail < nums.size() && nums[tail] < nums[head] + len) {
                tail++;
            }
            int res = tail - head;
            maxi = max(maxi, res);
        }
        return len - maxi;
    }
};