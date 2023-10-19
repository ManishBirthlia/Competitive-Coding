class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        stack<char>temp;
        for(auto it:s){ 
            if(it=='#' && !temp.empty()) temp.pop();
            else if(it!='#') temp.push(it);
        }
        while(!temp.empty()){
            s1+=temp.top();
            temp.pop();
        }
        for(auto it:t){ 
            if(it=='#' && !temp.empty()) temp.pop();
            else if(it!='#') temp.push(it);
        }
        while(!temp.empty()){
            t1+=temp.top();
            temp.pop();
        }
        return s1==t1;
    }
};