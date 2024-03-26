class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<size(nums);i++){
            mp[nums[i]]=1;
        }
        for(int i=1;i<pow(2,31);i++){
            if(!mp.count(i)){
                return i;
            }
        }
        return -1;
    }
};