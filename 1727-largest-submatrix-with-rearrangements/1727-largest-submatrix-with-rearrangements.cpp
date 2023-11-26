class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), maxi = 0;
        for(int i = 0 ; i < n ; i++) 
            for(int j = 1 ; j < m ; j++) 
                if(matrix[j][i]) matrix[j][i] += matrix[j - 1][i]; 
        for(auto it : matrix){
            auto vec = it;
            sort(vec.begin(), vec.end(), greater<int>());
            for(int j = 0 ; j < n ; j++)
                maxi = max(maxi, vec[j] * (j + 1));
        }
        return maxi;
    }
};