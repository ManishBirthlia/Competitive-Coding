class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<size(numbers);i++){
            if(mp.count(target-numbers[i])){
                return {mp[target-numbers[i]]+1,i+1};
            }
            mp[numbers[i]]=i;
        }
        return {};
    }
};