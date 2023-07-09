class Solution {
public:
    int find(vector<int>& nums, int K,int i,int j,int temp=0){
        while(j>=0 && K && nums[i]-nums[j]<=K){
            temp++;
            K-=nums[i]-nums[j];
            j--;
        }
        return temp;
    }
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=1;
        for(int i=1;i<size(nums);i++){
            if(nums[i]!=nums[i-1]) ans=max(find(nums,k,i-1,i-1),ans);
        }
        ans=max(find(nums,k,size(nums)-1,size(nums)-1),ans);
        return ans;
    }
};