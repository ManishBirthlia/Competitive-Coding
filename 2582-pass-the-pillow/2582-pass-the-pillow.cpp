class Solution {
public:
    int passThePillow(int n, int time) {
        int r=time/(n-1);
        if(r%2!=0){
            return n-time%(n-1);
        }
        return 1+time%(n-1);
    }
};