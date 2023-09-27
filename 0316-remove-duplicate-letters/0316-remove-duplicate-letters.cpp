class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp,mp2;
        stack<char>st;
        for(auto it:s) mp[it]++;
        for(int i=0;i<size(s);i++){
            if(mp2.count(s[i])){
                mp[s[i]]--;
                continue;
            }
            while(!st.empty() && st.top()>s[i] && mp[st.top()]>1 && !mp2.count(s[i])){
                mp[st.top()]--;
                mp2.erase(st.top());
                st.pop();
            }
            if(!mp2.count(s[i])){
                st.push(s[i]);
                mp2[s[i]]++;
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};