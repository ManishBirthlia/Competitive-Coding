class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy && t){ sx--;t--;}
        return max(abs(fy-sy),abs(sx-fx))<=t;
    }
};