class MyHashMap {
private:
    vector<vector<int>> mapp;
public:
    MyHashMap() {}
    
    void put(int key, int value) {
        for (auto &entry: mapp){
            if (entry[0] == key){
                entry[1] = value;
                return;
            }
        }

        mapp.push_back({key,value});
    }
    
    int get(int key) {
        for (auto &entry: mapp){
            if(entry[0] == key){
                return entry[1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for (auto it = mapp.begin(); it != mapp.end(); it++){
            if ((*it)[0] == key){
                mapp.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */