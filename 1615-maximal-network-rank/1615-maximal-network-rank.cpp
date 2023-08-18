class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>>g(n);
        for(auto it:roads){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int count=g[i].size();
            stack<int>st;
            for(int j=0;j<n;j++) if(i!=j) st.push(j);
            int maxi=INT_MIN;
            while(!st.empty()){
                int j=st.top();
                int cur=g[j].size();
                for(auto it:g[j]) if(it==i){
                    cur-=1;
                    break;
                }
                maxi=max(maxi,cur);
                st.pop();
            }
            ans=max(ans,count+maxi);
        }
        return ans;
    }
};