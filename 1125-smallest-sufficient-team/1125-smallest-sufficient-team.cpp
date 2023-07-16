class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
    int n = req_skills.size();
		unordered_map<int,vector<int>> res; 
        res.reserve(1 << n);
        res[0]={};
        unordered_map<string,int> skill_map;
        for(int i=0;i< req_skills.size();i++)
            skill_map[req_skills[i]]=i;
        for(int i=0;i<people.size();i++)
        {
            int curr_skill = 0;
            for(int j=0;j<people[i].size();j++)
                curr_skill |= 1<<skill_map[people[i][j]];
            for(auto it = res.begin();it!=res.end();it++)
            {
                int comb = it->first | curr_skill;
                if(res.find(comb)==res.end() || res[comb].size()>1+res[it->first].size())
                {
                    res[comb]=it->second;
                    res[comb].push_back(i);
                }       
            }
        }
        return res[(1<<n) -1];
    }
    // vector<int> dfs(set<string>s,vector<vector<string>>&p,int i,vector<int> ans){
    //     if(i==size(p)){
    //         if(s.empty()) return ans;
    //         return {};
    //     }
    //     vector<int> a,b;
    //     a=dfs(s,p,i+1,ans);
    //     for(auto x:p[i]) if(s.find(x)!=s.end()) s.erase(x);
    //     ans.push_back(i);
    //     b=dfs(s,p,i+1,ans);
    //     if(a.size()<b.size() && a.size()) return a;
    //     else if(b.size()) return b;
    //     return {};
    // }
    // vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
    //     set<string>s;
    //     vector<int>ans;
    //     for(auto it:req_skills){
    //         s.insert(it);
    //     }
    //     return dfs(s,people,0,ans);
    // }
};