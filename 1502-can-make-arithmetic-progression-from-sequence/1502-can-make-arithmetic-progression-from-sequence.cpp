class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for(int i=0;i<size(arr)-1;i++){
            if(arr[i+1]-arr[i]!=d){
                return false;
                break;
            }
        }
        return true;
    }
};