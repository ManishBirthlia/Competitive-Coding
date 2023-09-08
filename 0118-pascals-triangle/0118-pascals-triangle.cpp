class Solution {
public:
    // vector<vector<int>>v;
    vector<vector<int>> generate(int n){
        int row=1,ele=2,sz=1;
        vector<vector<int>>v(n);
        v[0].push_back(1);
        if(n==1) return v;
        while(sz!=n){
            for(int i=0;i<ele;i++){
                if(i==0 || i==ele-1) v[row].push_back(1);
                else v[row].push_back(v[row-1][i] + v[row-1][i-1]);
            }
            sz++;
            row++;
            ele++;
        }
        return v;
    }
    // vector<vector<int>> generate(int n){
    //     v.push_back({1});
    //     if(n==1) return v;
    //     v.push_back({1,1});
    //     if(n==size(v)) return v ;
    //     for(int i=3;i<=n;i++){
    //         vector<int>c(i,1);
    //         for(int j=1;j<i-1;j++){
    //             c[j]=v[i-2][j-1] + v[i-2][j];
    //         }
    //         v.push_back(c);
    //     }
    //     return v;
    // }
};