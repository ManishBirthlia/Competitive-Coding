class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int a=pref[0];
        for(int i=1;i<size(pref);i++){
            pref[i]=pref[i]^a;
            a^=pref[i];
        }
        return pref;
    }
};