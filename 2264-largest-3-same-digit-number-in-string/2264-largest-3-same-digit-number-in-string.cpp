class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
        for(int i=2;i<size(num);i++){
            if(num[i]==num[i-1] && num[i-1]==num[i-2]) ans=max(ans,stoi(num.substr(i-2,3)));
        }
        if(ans==-1) return "";
        else if(ans==0) return "000";
        return to_string(ans);
    }
};