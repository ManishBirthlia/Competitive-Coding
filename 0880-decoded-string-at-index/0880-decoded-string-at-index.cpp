class Solution {
public:
    string decodeAtIndex(string s, int k){
        string ans;
        long long cnt=1;
        int j=0;
        for(int i=1;i<s.size();i++){
            if(cnt>=k) break; 
            if(s[i]<='9'&&s[i]>='1') cnt=cnt*(s[i]-'0'); 
            else cnt++; 
            j++;
        }
        int i=j;
        while(i>=0){
            if(s[i]<='9'&&s[i]>='1') cnt=cnt/(s[i]-'0'); 
            else{
                if(k==0||k==cnt) break; 
                cnt--;
            }
            if(cnt<=k) k=k%cnt;
            i--;
        }
        ans+=s[i];
        return ans;
    }
};