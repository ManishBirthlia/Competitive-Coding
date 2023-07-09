class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        st.push(num[0]);
        stack<char>temp;
        int i=1,remove=1;
        while(i<size(num)){
            while(!st.empty() && st.top()>num[i] && k){
                st.pop();
                k--;
            }
            st.push(num[i]);
            i++;
        }
        while(k){st.pop();k--;}
        string ans;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty() && temp.top()=='0') temp.pop();
        while(!temp.empty()){
            ans+=temp.top();
            temp.pop();
        }
        if(ans=="") return "0";
        return ans;
    }
};