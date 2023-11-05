class Solution {
public:
    int getWinner(vector<int>& arr, int k,int maxi=0) {
        int f=arr[0];
        for(int i=1;i<size(arr);i++){
            if(f>arr[i]){
                maxi++;
            }else{
                maxi=1;
                f=arr[i];
            }
            if(maxi==k) return f;
        }
        return f;
    }
};