class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int start=1,end=size(piles),ans=0;
        sort(piles.rbegin(),piles.rend());
        while(start<end){
            ans+=piles[start];
            start+=2;
            end--;
        }
        return ans;
    }
};