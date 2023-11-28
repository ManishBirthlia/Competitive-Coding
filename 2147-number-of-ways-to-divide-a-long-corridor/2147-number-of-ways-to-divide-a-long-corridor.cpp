class Solution {
public:
    int numberOfWays(string corridor) {
        // ios::sync_with_stdio(false);
        // cout.tie(0);
        // cin.tie(0);
        const int MOD = 1e9 + 7;
        int seatNum = 0;
        for (auto i : corridor)
            if (i == 'S')
                seatNum++;
        if (seatNum == 0 || seatNum % 2 != 0)
            return 0;
        if (seatNum == 2)
            return 1;
        int n = corridor.size();
        long ans = 1;
        seatNum = 0;
        for (int i = 0; i < n; i++) {
            if (seatNum == 2) {
                seatNum = 0;
                int plantNum = 0;
                while (corridor[i] == 'P') {
                    plantNum++;
                    i++;                    
                }
                plantNum = (i == n) ? 0 : plantNum;
                ans = (ans * (plantNum + 1)) % MOD;
            }
            if (corridor[i] == 'S' && seatNum < 2)
                seatNum++;
        }  
        return ans;  
    }
};