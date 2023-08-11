class Solution {
public:
    void solve(vector<string>&v,string s,int left,int right,int n){
        if(right==n && left ==n){
            v.push_back(s);
            return;
        }else if(right>n || left>n) return;
        if(left >right){
            solve(v,s+'(',left+1,right,n);
            solve(v,s+')',left,right+1,n);
        }else{
            solve(v,s+'(',left+1,right,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        solve(v,"",0,0,n);
        return v;
    }
};