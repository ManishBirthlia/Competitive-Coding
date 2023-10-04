class Solution {
public:
    int strStr(string h, string ni) {
        int n=size(h),m=size(ni);
        for(int i=0;i<n;i++){
            int j=0;
            while(i<n && j<m && h[i+j]==ni[j]) j++;
            if(j==m) return i;
        }
        return -1;
    }
};