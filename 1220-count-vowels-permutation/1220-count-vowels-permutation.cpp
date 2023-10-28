class Solution{
public:
    int m=1e9+7;
    int countVowelPermutation(int n,int ans=5){
        unordered_map<char,int>mp,temp;
        vector<char>vowals={'a','e','o','i','u'};
        for(auto it:vowals) temp[it]++;
        for(int i=1;i<n;i++){
            ans=0;
            mp.clear();
            for(auto it:vowals){
                if(it=='a') mp['e']=(mp['e']+temp['a'])%m;
                else if(it=='u') mp['a']=(mp['a']+temp['u'])%m;
                else if(it=='e'){
                    mp['a']=(mp['a']+temp['e'])%m;
                    mp['i']=(mp['i']+temp['e'])%m;
                }else if(it=='i'){
                    mp['a']=(mp['a']+temp['i'])%m;
                    mp['e']=(mp['e']+temp['i'])%m;
                    mp['o']=(mp['o']+temp['i'])%m;
                    mp['u']=(mp['u']+temp['i'])%m;
                }else{
                    mp['u']=(mp['u']+temp['o'])%m;
                    mp['i']=(mp['i']+temp['o'])%m;
                }
            }
            for(auto it:mp) temp[it.first]=it.second;
            for(auto it:mp) ans=(ans+it.second)%m;
        }
        return ans;
    }
};