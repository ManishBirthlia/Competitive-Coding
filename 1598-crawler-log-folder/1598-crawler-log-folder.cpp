class Solution {
public:
    // Solved by Manish Birthlia
    int minOperations(vector<string>& logs) {
        stack<int>st;
        for(auto it:logs){
            if(it=="../"){
                if(!st.empty()) st.pop();
                continue;
            }else if(it=="./") continue;
            else st.push(1);
        }
        int ans=0;
        while(!st.empty()){
            ans++;
            cout<<st.top();
            st.pop();
        }
        return ans;
    }
};