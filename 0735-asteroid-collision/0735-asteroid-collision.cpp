class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        for(int i=0; i<size(asteroids); i++){
            if(asteroids[i] > 0 || st.empty()) st.push(asteroids[i]);
            else{
                while(!st.empty() && abs(asteroids[i]) > st.top() && st.top() > 0) st.pop();
                if(!st.empty() && abs(asteroids[i]) == st.top()) st.pop();
                else if(st.empty() || st.top() < 0) st.push(asteroids[i]);
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