class MyHashSet {
public:
    int hashmap[1000001]={0};
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashmap[key]=1;
    }
    
    void remove(int key) {
        hashmap[key]=0;
    }
    
    bool contains(int key) {
        return hashmap[key]!=0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */