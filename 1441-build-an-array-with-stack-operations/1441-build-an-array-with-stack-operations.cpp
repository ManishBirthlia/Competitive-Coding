class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        unordered_map<int,int>mp;
        vector<string>ans;
        for(auto it:t) mp[it]++;
        for(int i=1;i<=t.back();i++){
            if(!mp.count(i)){
                ans.push_back("Push");
                ans.push_back("Pop");
            }else ans.push_back("Push");
        }
        return ans;
    }
};