class Solution {
    const static int N = 127;
    int dp[N][N];
    string str;
    int n;
    inline int xs(int x) { return x == 1 ? 0 : x < 10 ? 1 : x < 100 ? 2 : 3; }
    int solve(int left, int k) {
        if(k < 0) return N;
        if(left >= n or n - left <= k) return 0;
        int& res = dp[left][k];
        if(res != -1) return res;
        res = N;
        int cnt[26] = {0};
        for(int j = left, most = 0; j < n; j++) {
            most = max(most, ++cnt[str[j] - 'a']);
            res = min(res, 1 + xs(most) + solve(j + 1, k - (j - left + 1 - most)));
        }
        return res;
    }
public:
    int getLengthOfOptimalCompression(string s, int k) {
        memset(dp, -1, sizeof(dp));
        str = s;
        n = s.size();
        return solve(0, k);
    }
};

/*class Solution {
public:
    int dp[101][101][101];
    map<string,int>mp;
    int helperr2(string temp,int n){
            string temp2;
            temp2+=temp[0];
            int count=1;
            for(int i=1;i<n;i++){
                if(count==1 && temp[i]!=temp[i-1]){
                    temp2+=temp[i];
                }else if(temp[i]==temp[i-1]){
                    count++;
                }else{
                    temp2+=to_string(count) + temp[i];
                    count=1;
                }
            }
            if(count!=1){
                temp2+=to_string(count);
                count=1;
            }
        return size(temp2);
    }
    int helper(string s,int n,int x ,int k){
        if(k==0) return helperr2(s,n);
        if(dp[n][x][k]!=INT_MAX){
            return dp[n][x][k];
        }
        string temp="";
        //int ans=INT_MAX;
        for(int i=0;i<size(s);i++){
            temp.clear();
            for(int j=0;j<size(s);j++){
                if(j==i){
                    continue;
                }
                temp+=s[j];
            }
            //ans=min(ans,helper(temp,n-1,i,k-1));
            dp[n][x][k]=min(dp[n][x][k],helper(temp,n-1,i,k-1));
        }
        return dp[n][x][k];
    }
    int getLengthOfOptimalCompression(string s, int k) {
        if(k==1 && size(s)==1) return 0;
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                for(int z=0;z<101;z++){
                    dp[i][j][z]=INT_MAX;
                } 
            }    
        }
        return helper(s,size(s),0,k);
    }
};*/