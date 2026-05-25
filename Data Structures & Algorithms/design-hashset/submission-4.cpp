class MyHashSet {
private:
    vector<int> mapp;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        auto it = find(mapp.begin(), mapp.end(), key);
        if (it == mapp.end()){
            mapp.push_back(key);
        }
    }
    
    void remove(int key) {
        auto it = find(mapp.begin(), mapp.end(), key);
        if (it != mapp.end()){
            mapp.erase(it);
        }
    }
    
    bool contains(int key) {
        auto it = find(mapp.begin(), mapp.end(), key);
        if (it != mapp.end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */