class Solution {
public:
    bool isPowerOfFour(int n){
        long long nx=n;
        if(nx<=0) return false;
        int count=0;
        while(nx>0){
            cout<<nx<<' ';
            if(nx&1 && nx>1) return false;
            else if(nx%2==0) count++;
            nx=nx>>1;
        }
        cout<<endl<<count<<' ';
        return count%2==0;
    }
};