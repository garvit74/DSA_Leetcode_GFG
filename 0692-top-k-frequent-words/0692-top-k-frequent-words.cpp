struct cmp {
    bool operator() (pair<int, string> a, pair<int, string> b) {
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mpp;
        for(int i = 0; i < words.size(); i++){
            mpp[words[i]]++;
        }
        
        priority_queue<pair<int,string>, vector<pair<int,string>>, cmp> hp;
        
        for(auto it: mpp){
            hp.push({it.second, it.first});
            // if(hp.size() < k){
            //     hp.push({it.second, it.first});
            // }
            // else{
            //     if(hp.top().first < it.second || (hp.top().first == it.second && hp.top().second > it.first)){
            //         hp.pop();
            //         hp.push({it.second, it.first});
            //     }
            // }
        }
        vector<string>ans;
        while(k--){
            ans.push_back(hp.top().second);
            hp.pop();
        }
        
        return ans;
    }
};