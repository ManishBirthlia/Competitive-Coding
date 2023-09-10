class LRUCache {
public:
    
    unordered_map <int, int> m, cnt;
    queue <int> q;
    int n;
    LRUCache(int capacity) : n(capacity) {}
    int get(int key) {
        if (cnt.find(key) == cnt.end()) 
            return -1;
        q.push(key);
        cnt[key]++;
        return m[key];
    }
    void put(int key, int value) {
        q.push(key);
        cnt[key]++;
        m[key] = value;
        while (cnt.size() > n) {
            int cur = q.front(); q.pop();
            if (cnt[cur]-- == 1) 
                cnt.erase(cur);
        }
    }
    
    // list<int>v;
    // map<int,int>mp;
    // int cap;
    // LRUCache(int capacity) {
    //     mp.clear();
    //     v.clear();
    //     cap=capacity;
    // }
    // int get(int key) {
    //     if(!mp.count(key)) return -1;
    //     v.remove(key);
    //     v.push_front(key);
    //     return mp[key];
    // }
    // void put(int key, int value) {
    //     if(mp.count(key)){
    //         v.remove(key);
    //     }else if(v.size()==cap){
    //         int last=v.back();
    //         v.pop_back();
    //         mp.erase(last);
    //     }
    //     v.push_front(key);
    //     mp[key]=value;
    // }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */