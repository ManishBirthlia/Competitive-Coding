class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_cost=0,total_gas=0,curr_gas=0,ans=INT_MAX;
        for(int i=0;i<size(cost);i++){
            total_cost+=cost[i];
            total_gas+=gas[i];
        }
        if(total_cost>total_gas) return -1;
        for(int i=0;i<size(cost);i++){
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0){
                ans=i+1;
                curr_gas=0;
            }else{
                ans=min(ans,i);
            }
        }
        return ans;
    }
};