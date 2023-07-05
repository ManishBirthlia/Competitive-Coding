class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected){
        vector<int>visited(size(isConnected),0);
        stack<int>st;
        int ans=0;
        for(int i=0;i<size(isConnected);i++){
            if(!visited[i]){
                ans++;
                st.push(i);
                while(!st.empty()){
                    int j=st.top();
                    st.pop();
                    visited[j]=1;
                    for(int x=0;x<size(isConnected[j]);x++) if(isConnected[j][x] && !visited[x]) st.push(x);
                }
            }
        }
        return ans;
    }
};