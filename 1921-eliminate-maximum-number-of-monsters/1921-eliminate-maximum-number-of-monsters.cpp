class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<double>pq;
        for(int i=0;i<size(dist);i++){
            double time=float(dist[i])/speed[i];
            pq.push(-time);
        }
        int curr_time=0,ans=0;
        while(!pq.empty()){
            double t=-pq.top();
            if(t-curr_time<=0) return ans;
            ans++;
            curr_time++;
            pq.pop();
        }
        return ans;
    }
};