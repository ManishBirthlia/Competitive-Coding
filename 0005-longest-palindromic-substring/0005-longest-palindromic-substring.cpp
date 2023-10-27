class Solution {
public:
    bool check(string s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    string longestPalindrome(string s){
        int index=0,sizee=0;
        for(int i=1;i<=size(s);i++){
            for(int j=i;j<=size(s);j++){
                if(sizee<j-i+1 && s[i-1]==s[j-1] && check(s,i-1,j-1)){
                    index=i-1;
                    sizee=j-i+1;
                }
            }
        }
        return s.substr(index,sizee);
    }
    
    //  2nd way to solve 
    
    /*string longestPalindrome(string s) {
        //pair<int,int> dp[1010][1010];
        int index=0,sizee=0;
        for(int i=1;i<=size(s);i++){
            for(int j=i;j<=size(s);j++){
                if(sizee<j-i+1 && check(s,i-1,j-1)){
                    index=i-1;
                    sizee=j-i+1;
                }
                // if(dp[i-1][j].second<j-i+1 && dp[i-1][j-1].second<j-i+1 && check(s,i-1,j-1)){
                //     dp[i][j]={i-1,j-i+1};
                // }else if(dp[i-1][j].second>dp[i-1][j-1].second) dp[i][j]=dp[i-1][j];
                // else dp[i][j]=dp[i-1][j-1];
            }
        }
        return s.substr(index,sizee);
        //return s.substr(dp[size(s)][size(s)].first,dp[size(s)][size(s)].second);
    }*/
    
    //3rd way to solve but leads TLE
    
    /*bool check(string s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    string dp[1001][1001];
    string helper(string s,int start,int end,int n){
        if(start>end || start==n) return "";
        if(dp[start][end]!="") return dp[start][end];
        string temp1,temp2,temp3;
        if(end<n-1) temp1=helper(s,start,end+1,n);
        temp2=helper(s,start+1,end,n);
        if(check(s,start,end)) temp3=s.substr(start,end-start+1);
        if(size(temp1)>=size(temp3) && size(temp1)>=size(temp2)) return dp[start][end]=temp1;
        else if(size(temp2)>=size(temp3) && size(temp2)>=size(temp1)) return dp[start][end]=temp2;
        return dp[start][end]=temp3;
    }
    string longestPalindrome(string s) {
        if(check(s,0,size(s)-1)) return s;
        return helper(s,0,0,size(s));
    }*/
};