class Solution {
public:
    double myPow(double x, int n){
       if(n==0) return 1;
        if(n==1) return x;
        if(n<0 && n!=INT_MIN) return myPow(1/x,-n);
        else if(n<0) return myPow(1/x,-(n+2));
        if(n%2==0)
            return myPow(x*x,n/2);
        return x*myPow(x*x,n/2);
    }
};