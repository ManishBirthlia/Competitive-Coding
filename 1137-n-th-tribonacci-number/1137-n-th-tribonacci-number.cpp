class Solution {
public:
    //1st way to solve 
    /*int tribonacci(int n) {
        int a[38]={0};
        a[1]=1;
        a[2]=1;
        if(n<=2) return a[n];
        for(int i=3;i<=n;i++){
            a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        return a[n];
    }*/
    //2nd way with better approch
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        int a=0,b=1,c=1,d;
        for(int i=3;i<=n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};