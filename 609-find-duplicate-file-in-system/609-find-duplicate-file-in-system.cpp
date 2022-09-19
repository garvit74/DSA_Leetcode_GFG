class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> mp;
        for(auto x: paths){
            stringstream ss(x);
            string i;
            string j;
            getline(ss, i, ' ');
            while(getline(ss, j, ' ')){
                string content = j.substr(j.find('(') + 1, j.find(')') - j.find('(') - 1 );
                string file = i + '/' + j.substr(0, j.find('('));
                mp[content].push_back(file);                
            }
        }
        vector<vector<string>> ans;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second.size() > 1){
                ans.push_back(it->second);
            }
        }
        return ans;
    }
};