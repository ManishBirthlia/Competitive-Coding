class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0,b=0;
        for(int i=0;i<size(gain);i++){
            a=a+gain[i];
            b=max(b,a);
        }
        return b;
    }
};