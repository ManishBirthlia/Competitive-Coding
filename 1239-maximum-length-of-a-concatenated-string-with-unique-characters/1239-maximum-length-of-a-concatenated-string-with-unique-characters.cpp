class Solution {
public:
    // **** Manish ****
    bool check(string s1,string s2){
        unordered_map<char,int>mp;
        for(auto it:s2){ 
            if(mp.count(it)) return false;
            else mp[it]++;
        }
        for(auto it:s1) if(mp.count(it)) return false;
        return true;
    }
    int maxLength(vector<string>& arr,string s="",int i=0) {
        if(i==size(arr)) return size(s);
        int a,b;
        a=maxLength(arr,s,i+1);
        b=check(s,arr[i])?maxLength(arr,s+arr[i],i+1):0;
        return max(a,b); 
    }
};