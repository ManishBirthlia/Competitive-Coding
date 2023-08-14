class cmp{
    public:
    bool operator()(string a,string b){
        if(a.size()>b.size()) return true;
        else if(a.size()<b.size()) return false;
        else{
            for(int i=0;i<size(a);i++){
                if(a[i]>b[i]) return true;
                else if(b[i]>a[i]) return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,cmp>pq;
        for(auto it:nums){
            if(pq.size()==k){
                pq.push(it);
                pq.pop();
            }else pq.push(it);
        }
        return pq.top();
    }
};