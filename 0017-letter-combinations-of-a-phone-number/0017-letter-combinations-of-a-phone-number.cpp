class Solution {
public:
    unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void dfs(string digits,vector<string>&ans,int i,string temp=""){
        if(i==size(digits)){ 
            if(temp.size()) ans.push_back(temp);                
            return;
        }
        for(auto it:mp[digits[i]]) dfs(digits,ans,i+1,temp+it);
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        dfs(digits,ans,0);
        return ans;
    }
};