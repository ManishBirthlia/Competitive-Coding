class Solution{
public:
    string minWindow(string s, string t) {
        vector<int> map(128,0);
        for(auto c: t) map[c]++;
        int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
        while(end<s.size()){
            if(map[s[end++]]-->0) counter--; //in t
            while(counter==0){ //valid
                if(end-begin<d)  d=end-(head=begin);
                if(map[s[begin++]]++==0) counter++;  //make it invalid
            }  
        }
        return d==INT_MAX? "":s.substr(head, d);
    }
    /*string minWindow(string s, string t){
        unordered_map<char,int>ump1;
        unordered_map<char,int>ump2;
        for(auto &i:t){ump1[i]++;}
        string temp1,ans;
        int count=0,a=0,x=0;
        for(int i=0;i<size(s);i++){
            if(ump2.empty() && ump1.count(s[i])){
                temp1+=s[i];
            }else if(!ump2.empty()){
                temp1+=s[i];
            }
            if(ump1.count(s[i]) && ump1[s[i]]>ump2[s[i]]){
                ump2[s[i]]++;
                count++;
                //if(count==1) a=i;
            }
            x++;
            if(x==size(t)){
                a=i-count;
                x=0;
            }
            if(ump1.size()==ump2.size() && count==size(t)){
                if(temp1.size()<ans.size() || ans.size()==0){
                    ans.clear();
                    ans=temp1;
                    ump2.clear();
                    temp1.clear();
                    count=0;
                    i=a;
                }else{
                    ump2.clear();
                    temp1.clear();
                    count=0;
                    i=a;
                }
            }
        }
        return ans;
    }*/
};