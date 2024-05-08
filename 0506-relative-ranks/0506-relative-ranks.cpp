class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>pq;
        map<int,string>mp;
        for(auto i:score) pq.push(i);
        int count=0;
        while(!pq.empty()){
            count++;
            if(count==1)
                mp[pq.top()]="Gold Medal";
            else if(count==2)
                mp[pq.top()]="Silver Medal";
            else if(count==3)
                mp[pq.top()]="Bronze Medal";
            else 
                mp[pq.top()]=to_string(count);
            pq.pop();
        }
        vector<string>v;
        for(int i=0;i<size(score);i++){
            v.push_back(mp[score[i]]);
        }
        return v;
    }
};