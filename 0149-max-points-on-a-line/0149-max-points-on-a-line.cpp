class Solution {
public:
    int maxPoints(vector<vector<int>>& p,int ans=0){
        for(int i=0;i<size(p);i++){
            unordered_map<double,int>mp;
            for(int j=0;j<size(p);j++){
                if(i!=j && p[j][0]==p[i][0]){
                    mp[INT_MAX]++;
                }else if(i!=j){
                    double slope = double(p[j][1]-p[i][1]) / double(p[j][0]-p[i][0]);
                    mp[slope]++;
                }
            }
            int temp=0;
            for(auto it:mp) temp=max(temp,it.second);
            ans=max(ans,temp+1);
        }
        return ans;
    }
};