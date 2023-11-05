class Solution {
public:
    int getWinner(vector<int>& arr, int k,int maxi=0) {
        queue<int>q;
        unordered_map<int,int>mp;
        for(auto it:arr) q.push(it);
        int f=q.front();
        q.pop();
        while(!q.empty()){
            if(f>q.front()){
                maxi++;
                q.pop();
            }else{
                maxi=1;
                f=q.front();
                q.pop();
                mp[f]++;
            }
            if(maxi==k) return f;
        }
        return f;
    }
};