class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& t, vector<int>& nt) {
        int n = t.size(), i = 0;
        vector<vector<int>> ans;
        while(i < n && t[i][1] < nt[0]){
            ans.push_back(t[i]);
            i++;
        }
        while(i < n && nt[1] >= t[i][0]){
            nt[0] = min(nt[0], t[i][0]);
            nt[1] = max(nt[1], t[i][1]);
            i++;
        }
        ans.push_back(nt);
        while(i < n){
            ans.push_back(t[i]);
            i++;
        }
        return ans;
    }
};
//------------ General answer to big data ------------------------//
// class cmp{
//     public:
//     bool operator()(vector<int>a,vector<int>b){
//         return a[0]>=b[0];
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& t, vector<int>& nt) {
//         priority_queue<vector<int>,vector<vector<int>>,cmp>pq(t.begin(),t.end());
//         pq.push(nt);
//         int i=-1;
//         vector<vector<int>>ans;
//         while(!pq.empty()){
//             if(i==-1){
//                 ans.push_back(pq.top());
//                 i++;
//                 pq.pop();
//             }else if(ans[i][1]>=pq.top()[0]){
//                 ans[i][1]=max(ans[i][1],pq.top()[1]);
//                 pq.pop();
//             }else{
//                 ans.push_back(pq.top());
//                 i++;
//                 pq.pop();
//             }
//         }
//         return ans;
//     }
// };