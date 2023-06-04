class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>visited(size(isConnected),0);
        stack<int>st;
        int ans=0;
        for(int i=0;i<size(isConnected);i++){
            if(visited[i]==0){
                ans++;
                st.push(i);
                while(!st.empty()){
                    int x=st.top();
                    st.pop();
                    visited[x]=1;
                    for(int j=0;j<size(isConnected);j++) if(isConnected[x][j]==1 && x!=j && visited[j]==0) st.push(j);
                }
            }
        }
        return ans;
    }
};