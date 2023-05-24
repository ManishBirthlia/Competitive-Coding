class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int ans=0,n=size(c);
        for(int i=0;i<n;i++){
            ans=max(ans,min(c[i],n-i));
        }
        return ans;
    }
};