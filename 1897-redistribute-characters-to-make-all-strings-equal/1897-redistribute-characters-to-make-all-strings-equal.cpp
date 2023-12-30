class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>v(26,0);
        int n=size(words);
        for(auto s:words){
            for(auto it:s) v[it-'a']++;
        }
        for(auto it:v) if(it%n!=0) return false;
        return true;
    }
};