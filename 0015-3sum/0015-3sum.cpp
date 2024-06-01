class Solution {
public:
    // Solved by Manish Kumar
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                int sum=-(nums[i]+nums[j]),start=i+1,end=j-1;
                while(start<=end){
                    int mid=(start+end)/2;
                    if(nums[mid]==sum){
                        mp[{nums[i],nums[mid],nums[j]}]++;
                        break;
                    }else if(nums[mid]>=sum) end=mid-1;
                    else start=mid+1;
                }
            }
        }
        for(auto it:mp) ans.push_back(it.first);
        return ans;
    }
};