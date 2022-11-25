class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        
        string ans = "";
        priority_queue<pair<int,char>> hp;
        
        for(auto &it: mp){
            hp.push({it.second, it.first});
        }
        
        while(!hp.empty()){
            for(int i = 0; i < hp.top().first; i++)
            {
                ans += hp.top().second;
            }
            hp.pop();
        }
        return ans;
    }
};