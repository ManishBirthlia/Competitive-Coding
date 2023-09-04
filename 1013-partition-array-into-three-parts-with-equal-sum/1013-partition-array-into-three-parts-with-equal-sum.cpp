class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& nums,int parts=0) {
        auto total = accumulate(begin(nums), end(nums), 0);
        if (total % 3 != 0) return false;
        for (auto i = 0, sum = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (sum == (parts + 1) * total / 3) ++parts;
        }
        return parts >= 3;
    }
};