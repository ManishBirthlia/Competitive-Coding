class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxi=-1;
        map<int,int>mp;
        for(auto it:nums){
            maxi=max(maxi,it);
            mp[it]++;
        }
        int n=mp.size(),i=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int a=n-i;
            if(a==3) return it->first;
            i++;
        }
        return maxi;
    }
};