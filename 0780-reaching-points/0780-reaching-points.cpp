class Solution {
public:
    bool reachingPoints(long long sx, long long sy, long long tx, long long ty) {
        if(tx<sx || ty<sy) return false;
        if(tx==sx) return (ty-sy)%tx==0;
        if(ty==sy) return (tx-sx)%ty==0;
        if(tx<=ty) return reachingPoints(sx,sy,tx,ty%tx);
        return reachingPoints(sx,sy,tx%ty,ty);
        // if(sx==tx && sy==ty) return true;
        // else if(sx>tx || sy>ty) return false;
        // return ty<tx?reachingPoints(sx,sy,tx-ty,ty):0 || tx<ty?reachingPoints(sx,sy,tx,ty-tx):0;
    }
};