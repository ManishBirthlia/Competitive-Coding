class Solution {
public:
    double myPow(double x, int n){
        if(x==1) return 1;
        else if(x==-1 && n%2==0) return 1;
        else if(x==-1 && n%2==1) return -1;
        if(n==-2147483648) n=-2147483647;
        if(n<0){
            x=1/x;
            n*=-1;
        }
        double ans=1;
        while(n){
            if(!ans) return ans;
            ans*=x;
            n--;
        }
        return ans;
    }
};