class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        for(int i=1;i<size(nums);i=i+2){
            nums[i]=pq.top();
            pq.pop();
        }
        for(int i=0;i<size(nums);i=i+2){
            nums[i]=pq.top();
            pq.pop();
        }
    }
};