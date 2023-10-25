class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n<=1){
            return 0;
        }
        float size = pow(2,n-1);
        int mid  =size/2;
        if(mid>=k){
            return kthGrammar(n-1,k);
        }
        else{
            return 1-kthGrammar(n-1,k-mid);
        }
    }
};