class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        for(int i=0; i<size(asteroids); i++){
            int x=asteroids[i];
            if(st.empty() || x>0) st.push(x);
            else{
                while(!st.empty() && abs(x)>abs(st.top()) && st.top()>0) st.pop();
                if(st.empty() || st.top()<0) st.push(x);
                else if(st.top()==-x){
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};