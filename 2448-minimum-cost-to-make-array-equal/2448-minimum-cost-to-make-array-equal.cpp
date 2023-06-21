class Solution {
public:
    long long minCost(vector<int>& n, vector<int>& cost) {
        long long total = accumulate(begin(cost), end(cost), 0LL), res = 0;
        int l = 0, r = 1000000;
        while (l < r) {
            long long sum = 0, m = (l + r) / 2;
            for (int i = 0; i < n.size(); ++i)
                sum += n[i] <= m ? cost[i] : 0;
            if (sum <= total / 2)
                l = m + 1;
            else
                r = m;
        }
        for (int i = 0; i < n.size(); ++i)
            res += (long long)cost[i] * abs(n[i] - l);
        return res;    
    }
};