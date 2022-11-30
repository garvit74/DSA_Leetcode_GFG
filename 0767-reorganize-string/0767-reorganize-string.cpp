class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i < s.size();i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it: mp){
            pq.push(make_pair(it.second,it.first));
        }
        pair<int, char> g = {-1, '#'};
        
        string ans = "";
        
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            ans += temp.second;
            // cout << temp.second << endl;
            temp.first--;
            
            if(g.first > 0){
                pq.push(g);
            }
            
            g = temp;
            
        }
        
        if(ans.size() == s.size()){
            return ans;
        }
        return "";
    }
};