class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour){
        int start=1,end=1e7+1;
        int ans=INT_MAX;
        while(start<=end){
            int mid=(start+end)/2;
            double result=0;
            for (int i = 0; i < dist.size() - 1; ++i) result += ((dist[i] + mid - 1) / mid);
            result += ((double)dist.back()) / mid;
            if(result-hour>0){
                start=mid+1;
            }else{
                end=mid-1;
                ans=min(ans,mid);
            }
        }
        if(ans!=INT_MAX) return ans;
        return -1;
    }
};