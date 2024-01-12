class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowals="aeiouAEIOU";
        int count=0,right=size(s)/2,left=right-1;
        while(left>=0){
            if(vowals.find(s[left])<vowals.size()) count--;
            if(vowals.find(s[right])<vowals.size()) count++;
            left--;
            right++;
        }
        return count==0;
    }
};