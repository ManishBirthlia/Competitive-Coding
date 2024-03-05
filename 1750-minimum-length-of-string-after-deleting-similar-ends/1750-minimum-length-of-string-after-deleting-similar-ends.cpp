class Solution {
public:
    int minimumLength(string s) {
        int start=0,end=size(s)-1;
        while(start<=end){
            int st=start,e=end;
            if(st==e) return 1;
            while(s[end]==s[st] && end) end--;
            while(s[start]==s[e] && start<size(s)) start++;
            if(st==start || e==end) return end-start+1;
        }
        return 0;
    }
};