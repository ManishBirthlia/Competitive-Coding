class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        sort(p.begin(),p.end());
        int s=0,e=size(p)-1,ans=0;
        while(s<=e){
            if(p[s]+p[e]>l && s!=e) e--;
            else{
                e--;
                s++;
            }
            ans++;
        }
        return ans;
    }
};