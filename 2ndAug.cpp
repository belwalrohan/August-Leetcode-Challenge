class MyHashSet {
public:
    set<int> hashset;
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashset.insert(key);
    }
    
    void remove(int key) {
        hashset.erase(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return(hashset.find(key)!=hashset.end());
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
