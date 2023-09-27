class NumberContainers {
public:
    unordered_map<int,priority_queue<int>>mp;
    unordered_map<int,int>check;
    NumberContainers() {
        
    }
    void change(int index, int number) {
        check[index]=number;
        mp[number].push(-index);
    }
    int find(int number){
        while(!mp[number].empty() && check[-mp[number].top()]!=number){
            cout<<mp[number].top()<<' ';
            mp[number].pop();
        }
        if(!mp.count(number) || mp[number].empty()) return -1;
        return -mp[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */