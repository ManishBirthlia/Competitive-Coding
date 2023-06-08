class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t){
       if(n==1) return 1;
        vector<int>a(n+1,0);
        vector<int>b(n+1,0);
        for(int i=0;i<size(t);i=i+1){
            b[t[i][0]]=b[t[i][0]]+1;
            a[t[i][1]]=a[t[i][1]]+1;
        }
        for(int i=0;i<n+1;i=i+1){
            if(a[i]==n-1 && b[i]==0){
                return i;
            }
        }
        return -1;
    }
};