class TimeMap {
public:
    unordered_map<string, vector<pair<int,string>>>m;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) != m.end()){
            for(int i = m[key].size()-1; i >= 0; i--){
                if(m[key][i].first <= timestamp){
                    return m[key][i].second;
                }
            }
           return "";
        }
        else {
            return "";
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */