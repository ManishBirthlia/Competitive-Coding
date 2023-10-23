class Solution {
public:
    bool isPowerOfFour(int n,int count=0){
        if(n<=0) return false;
        while(n>0){
            if(n&1 && n>1) return false;
            else if(n%2==0) count++;
            n=n>>1;
        }
        return count%2==0;
    }
};