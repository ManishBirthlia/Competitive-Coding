class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp,temp;
        for(auto it:nums) mp[it]++;
        for(auto it:mp) temp[it.second]+=it.second;
        int ans=0,feq=0;
        for(auto it:temp){
            if(it.first>feq){ ans=it.second;
                            feq=it.first;}
        }
        return ans;
    }
};