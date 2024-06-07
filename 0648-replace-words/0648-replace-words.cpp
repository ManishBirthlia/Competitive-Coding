class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,int>mp;
        string s="",ans="";
        bool t=false;
        for(auto it:dictionary) mp[it]++;
        for(auto it:sentence){
            if(it!=' ') s+=it;
            if(mp.count(s) && !t){
                ans+=s;
                t=true;
            }else if(it==' '){
                ans+=(t?"":s)+it;
                t=false;
                s="";
            }
        }
        if(!t) ans+=s;
        return ans;
    }
};