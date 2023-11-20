class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size(), time = 0, mIdx = 0, pIdx = 0, gIdx = 0;
        for(int i = 1; i < travel.size(); i++) travel[i] += travel[i - 1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < garbage[i].length(); j++){
                if(garbage[i][j] == 'M') mIdx = i;
                else if(garbage[i][j] == 'P') pIdx = i;
                else gIdx = i;
                time++;
            }
        }
        time += mIdx > 0 ? travel[mIdx - 1] : 0;
        time += pIdx > 0 ? travel[pIdx - 1] : 0;
        time += gIdx > 0 ? travel[gIdx - 1] : 0;
        return time;
    }
};