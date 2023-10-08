#define ll long long
class Solution {
public:
    ll dp[501][501][2];
    ll f(int i,int j, vector<int>& nums1, vector<int>& nums2,bool picked){
        int n = nums1.size(), m = nums2.size();
        if((i == n || j == m) && picked == true) return 0;
        if(i == n || j == m) return LONG_MIN;
        if(dp[i][j][picked] != -1) return dp[i][j][picked];
        ll a = (ll)nums1[i]*nums2[j] +f(i+1,j+1,nums1,nums2,true);
        ll b = f(i,j+1,nums1,nums2,picked);
        ll c = f(i+1,j,nums1,nums2,picked);
        return dp[i][j][picked] = max({a,b,c});
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp,-1,sizeof(dp));
        return f(0,0,nums1,nums2,false);
    }
};