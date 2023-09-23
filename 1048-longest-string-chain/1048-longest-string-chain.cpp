// class cmp{
//     public:
//     bool operator()(string &a,string &b){
//         return size(a)<size(b);
//     } 
// };
class Solution {
public:
    static bool cmp(string &a,string &b){
        return size(a)<size(b);
    } 
    int longestStrChain(vector<string>& w){
        int n=size(w),ans=1;
        vector<int>dp(n,1);
        sort(w.begin(),w.end(),cmp);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(size(w[i])+1==size(w[j])){
                    int count=0,a=0,b=0;
                    while(a<size(w[i]) && b<size(w[j])){
                        if(w[i][a]==w[j][b]) a++;
                        else count++;
                        b++;
                    }
                    count+=size(w[j])-b;
                    if(count==1){
                        dp[j]=max(dp[j],dp[i]+1);
                        ans=max(ans,dp[j]);
                    }
                }
            }
        }
        return ans;
    }
};