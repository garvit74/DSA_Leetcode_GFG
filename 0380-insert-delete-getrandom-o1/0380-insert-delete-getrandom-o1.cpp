class RandomizedSet {
public:
    unordered_map<int,int> m;
    vector<int> vec;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.count(val)){
            return false;
        }
        m[val] = vec.size();
        vec.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!m.count(val)){
            return false;
        }
        else{
            int i = m[val];
            int j = vec.back();
            vec[i] = j;
            vec.pop_back();
            m[j] = i;
            m.erase(val);
            return true;
        }
    }
    
    int getRandom() {
        int rand_i = rand() % vec.size();
        return vec[rand_i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */