class Solution {
public:
    bool isPowerOfTwo(int n){
        if(n<=0) return false;
        return (n&(n-1))==0;
        // if(n==1)
        //     return true;
        // if(n<1||n%2!=0)
        //     return false;
        // return isPowerOfTwo(n/2);
    }
};