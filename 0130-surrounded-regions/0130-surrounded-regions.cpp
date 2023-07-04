class Solution {
public:
    bool check(int n,int m,int i,int j){
        return i>=0 && i<m && j>=0 && j<n;
    }
    void solve(vector<vector<char>>& board){
        int m=size(board),n=size(board[0]);
        stack<pair<int,int>>st;
        vector<vector<char>>compare(m,vector<char>(n,'X'));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==m-1 || j==0 || j==n-1) if(board[i][j]=='O') st.push({i,j});
            }
        }
        while(!st.empty()){
            int curr_i=st.top().first,curr_j=st.top().second;
            compare[curr_i][curr_j]='O';
            st.pop();
            if(check(n,m,curr_i,curr_j+1) && board[curr_i][curr_j+1]=='O' && compare[curr_i][curr_j+1]=='X') st.push({curr_i,curr_j+1});
            if(check(n,m,curr_i,curr_j-1) && board[curr_i][curr_j-1]=='O' && compare[curr_i][curr_j-1]=='X') st.push({curr_i,curr_j-1});
            if(check(n,m,curr_i+1,curr_j) && board[curr_i+1][curr_j]=='O' && compare[curr_i+1][curr_j]=='X') st.push({curr_i+1,curr_j});
            if(check(n,m,curr_i-1,curr_j) && board[curr_i-1][curr_j]=='O' && compare[curr_i-1][curr_j]=='X') st.push({curr_i-1,curr_j});
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(compare[i][j]=='X' && board[i][j]=='O') board[i][j]='X';
            }
        }
    }
};