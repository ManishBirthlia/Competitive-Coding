class Solution {
public:
    using ll = long long;
    long long mod=1e9+7;
    ll find_sum(ll n,ll a){
        return n*(2*a+(n-1))/2;
    }
   long long minimumPossibleSum(int n, int target) {
       ll lim=n,k=target;
       ll half=k/2;
       return (half>=n)?lim*(lim+1)/2:(half*(half+1)/2+find_sum(lim-half,k))%mod;
    }
};