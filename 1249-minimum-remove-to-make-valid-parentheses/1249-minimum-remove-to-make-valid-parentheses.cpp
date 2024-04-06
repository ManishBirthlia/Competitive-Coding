class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        string ans;
        unordered_map<int,int>mp;
        for(int i=0;i<size(s);i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')' && !st.empty() && s[st.top()]=='('){
                mp[st.top()]++;
                mp[i]++;
                st.pop();
            }else if(s[i]==')' && st.empty()) continue;
            else mp[i]++;
        }
        for(int i=0;i<size(s);i++){
            if(mp.count(i))ans+=s[i];
        }
        return ans;
    }
};