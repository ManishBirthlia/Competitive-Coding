class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        unordered_map<int,int>mp;
        queue<int>q;
        q.push(start);
        mp[start]=1;
        while(!q.empty()){
            int s=q.front();
            q.pop();
            if(arr[s]==0) return true;
            int back=s-arr[s],next=s+arr[s];
            if(back>=0 && !mp.count(back)){
                mp[back]=1;
                q.push(back);
            }
            if(next<size(arr) && !mp.count(next)){
                mp[next]=1;
                q.push(next);
            }
        }
        return false;
    }
};