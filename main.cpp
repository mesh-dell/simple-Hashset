class MyHashSet {
public:
    int hashTable[(int) 10e6];
    MyHashSet() {
        
    }
    int hashFunction(int data)
    {
        int key = data - 1;
        if (key < 0)
            key = 0;
        return key;
    }
    void add(int key) {
        int index = hashFunction(key);
        hashTable[index] = key;
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        hashTable[index] = -1;
    }
    
    bool contains(int key) {
        int index = hashFunction(key);
        if (hashTable[index] == key)
            return true;
        else
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