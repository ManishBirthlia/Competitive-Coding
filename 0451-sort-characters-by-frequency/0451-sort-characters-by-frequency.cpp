class Solution {
public:
    string frequencySort(string s){
        map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(int i=0;i<size(s);i++){
            if(mp.count(s[i])){
                mp[s[i]]++;
            }else{
                mp[s[i]]=1;
            }
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string temp;
        while(!pq.empty()){
            char a=pq.top().second;
            int x=pq.top().first;
            for(int i=0;i<x;i++){
                temp+=a;
            }
            pq.pop();
        }
        return temp;
    }
};