class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>ans;
        for(int i=0;i<size(searchWord);i++){
            string s=searchWord.substr(0,i+1),temp;
            vector<string>c;
            priority_queue<string,vector<string>,greater<string>>pq;
            for(int j=0;j<size(products);j++){
                temp=products[j].substr(0,i+1);
                if(temp==s) pq.push(products[j]);
            }
            for(int j=0;j<3 && !pq.empty();j++){
                c.push_back(pq.top());
                pq.pop();
            }
            ans.push_back(c);
        }
        return ans;
    }
};