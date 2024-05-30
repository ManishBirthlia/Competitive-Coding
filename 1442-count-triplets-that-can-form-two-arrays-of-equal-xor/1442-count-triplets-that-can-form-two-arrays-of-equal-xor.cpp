class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<size(arr);i++){
            int a=0;
            for(int j=i+1;j<size(arr);j++){
                a^=arr[j-1];
                int b=0;
                for(int k=j;k<size(arr);k++){
                    b^=arr[k];
                    if(a==b) ans++;
                }
            }
        }
        return ans;
    }
};