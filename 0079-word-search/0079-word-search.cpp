class Solution {
public:
        bool exist(vector<vector<char>>& board, string word) {
        for (unsigned int i = 0; i < board.size(); i++) 
            for (unsigned int j = 0; j < board[0].size(); j++) 
                if (dfs(board, i, j, word))
                    return true;
        return false;
    }
    
    bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
        if (!word.size())
            return true;
        if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
            return false;
        char c = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
        board[i][j] = c;
        return ret;
    }
    // int sz=0;
    // unordered_map<char,int>temp;
    // bool solve(vector<vector<char>>&b,string w,int n,int i,int j){
    //     if(n==size(w)){
    //         return true;
    //     }if(size(s)>sz||i<0||j<0||j>=size(b[0])||i>=size(b)||b[i][j]=='*') return false;
    //     bool a=false,x=false,c=false,d=false;
    //     char at=b[i][j];
    //     b[i][j]='*';
    //     a=solve(b,w,s+at,i+1,j);
    //     x=solve(b,w,s+at,i,j+1);
    //     c=solve(b,w,s+at,i-1,j);
    //     d=solve(b,w,s+at,i,j-1);
    //     b[i][j]=at;
    //     return a||x||c||d;
    // }
    // bool exist(vector<vector<char>>& board, string word){
    //     string s;
    //     temp[word[0]]=1;
    //     sz=size(word);
    //     bool ans=false;
    //     for(int i=0;i<size(board);i++){
    //         for(int j=0;j<size(board[0]);j++){
    //             if(temp.count(board[i][j])){
    //                 ans=solve(board,word,s,i,j);
    //                 if(ans) return ans;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
};