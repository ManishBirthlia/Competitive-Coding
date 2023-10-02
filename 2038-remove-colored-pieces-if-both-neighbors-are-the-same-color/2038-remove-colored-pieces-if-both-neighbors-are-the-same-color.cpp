class Solution {
public:
    bool winnerOfGame(string c) {
        stack<int>a,b;
        for(int i=1;i<size(c)-1;i++){
            if(c[i-1]=='A' && c[i]=='A' && c[i+1]=='A') a.push(i);
            else if(c[i-1]=='B' && c[i]=='B' && c[i+1]=='B') b.push(i);
        }
        return a.size()>b.size();
    }
};