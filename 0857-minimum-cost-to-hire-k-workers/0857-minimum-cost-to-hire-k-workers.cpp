class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage,int k){
        int n = quality.size();
        double minCost = DBL_MAX;
        double qualityTillNow = 0;
        vector<pair<double, int>> wageQualityRatio;
        for (int i = 0; i < n; ++i) {
            wageQualityRatio.emplace_back(
                static_cast<double>(wage[i]) / quality[i], quality[i]);
        }
        sort(wageQualityRatio.begin(), wageQualityRatio.end());
        priority_queue<int> highQualityWorkers;
        for (int i = 0; i < n; ++i) {
            double ratio = wageQualityRatio[i].first;
            int qua = wageQualityRatio[i].second;
            qualityTillNow += qua;
            highQualityWorkers.push(qua);
            if (highQualityWorkers.size() > k) {
                qualityTillNow -= highQualityWorkers.top();
                highQualityWorkers.pop();
            }
            if (highQualityWorkers.size() == k) {
                minCost = min(minCost, qualityTillNow * ratio);
            }
        }
        return minCost;
    }
};
// class Solution {
// public:
//     double mincostToHireWorkers(vector<int>& q, vector<int>& w, int k) {
//         int n=size(q),start=0,end=n-1;
//         double ans=INT_MAX;
//         vector<double> f(n,0);
//         for(int i=0;i<n;i++){
//             f[i]=(float(w[i])/q[i]);
//         }
//         sort(f.begin(),f.end());
//         while(start<end){
//             int mid=(start+end)/2,z=k,t=1;
//             double sum=0;
//             priority_queue<pair<int,int>>pq;
//             for(int i=0;i<n;i++){
//                 pq.push({-q[i]*f[mid],w[i]});
//             }
//             while(z){
//                 if(-pq.top().first<pq.top().second){
//                     t=0;
//                     break;
//                 }
//                 sum+=-pq.top().first;
//                 pq.pop();
//                 z--;
//             }
//             if(t){
//                 end=mid-1;
//                 ans=min(ans,sum);
//             }
//             else start=mid+1;
//         }
//         return ans;
//     }
// };