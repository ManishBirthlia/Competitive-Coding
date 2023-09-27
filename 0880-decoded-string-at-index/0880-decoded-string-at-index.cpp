class Solution {
public:
    string decodeAtIndex(string s, int k){
        long long size = 0;
        int i;
        for(i = 0; size < k; i++) {
            if(isdigit(s[i])) size *= (s[i] - '0');
            else size++; 
        }
        for(i = i - 1; i >= 0; i--) {
            if(isdigit(s[i])){
                size /= (s[i] - '0');
                k %= size;
            }else{
                if(k % size == 0) return string(1, s[i]);
                size--;
            }
        }
        return "";
    }
};