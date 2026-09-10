class MyHashMap {
public:
    int data[1000001] = {};
    bool present[1000001] = {};

    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        data[key] = value;
        present[key] = true;
    }
    
    int get(int key) {
        if(present[key])
            return data[key];

        return -1;
    }
    
    void remove(int key) {
        present[key] = false;
    }
};