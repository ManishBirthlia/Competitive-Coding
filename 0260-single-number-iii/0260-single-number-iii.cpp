class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long ans=0;
        for(auto it:nums) ans^=it;
        long long bit=ans&-ans;
        int x=0,y=0;
        for(auto it:nums){
            if(it&bit) x^=it;
            else y^=it;
        }
        return {x,y};
    }
};