class Solution{
public:
    int dfs(int n,int i,int count=1){
        if(n==0) return 1;
        else if(i==n && count>1) return i;
        else if(n<0 || i>=n) return 0;
        return max(i*dfs(n-i,i,count+1),dfs(n,i+1,count));
    }
    int integerBreak(int n){
        return dfs(n,1);
    }
};