class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0,p=-1,ans=0;
        for(auto it:bank){
            for(auto i:it) if(i=='1') count++;
            if(p!=-1 && count){
                ans+=count*p;
                p=count;
                count=0;
            }else if(count){
                p=count;
                count=0;
            }
        }
        return ans;
    }
};