class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int x=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<x)
            return true;
            while(!st.empty() && nums[i]>st.top()){
                x=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};