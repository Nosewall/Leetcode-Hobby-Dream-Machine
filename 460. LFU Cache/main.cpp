// update self.capacity when created
// the data structure is a map, and I'll use another map to keep track of frequency
//

class LFUCache {
    unordered_map<int, list<pair<int, int>>> frequencies;
    unordered_map<int, pair<int, list<pair<int, int>>::iterator>> cache;
    int cap;
    int minf;

    //Helper method to insert an entry into the map
    void insert(int key, int frequency, int value){
        frequencies[frequency].push_back({key, value});
        //This is a wild line
        cache[key] = {frequency, --frequencies[frequency].end()};
    }

public:
    LFUCache(int capacity) : cap(capacity), minf(0) {    }

    int get(int key) {
        const auto it = cache.find(key);
        if (it == cache.end()) {
            return -1;
        }
        const int f = it->second.first;
        const auto iter = it->second.second;
        const pair<int, int> kv = *iter;
        frequencies[f].erase(iter);
        if (frequencies[f].empty() && minf == f) {
            ++minf;
        }
        insert(key, f + 1, kv.second);
        return kv.second;
    }

    void put(int key, int value) {
        if (cap <= 0) {
            return;
        }
        const auto it = cache.find(key);
        if (it != cache.end()) {
            it->second.second->second = value;
            get(key);
            return;
        }
        if (cap == cache.size()) {
            cache.erase(frequencies[minf].front().first);
            frequencies[minf].pop_front();
        }
        minf = 1;
        insert(key, 1, value);
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */