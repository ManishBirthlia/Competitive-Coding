class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sw) {
        int a[2];
        for(auto it:st) a[it]++;
        for(auto it:sw){
            if(a[it]) a[it]--;
            else break;
        }
        return a[0]+a[1];
    }
};