class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int>loss;
        for(auto m: matches){
            if (!loss.count(m[0])) 
            {
                loss[m[0]] = 0;
            }
            loss[m[1]]++;
        }
        
        vector<int> l0, l1;
        for (auto[k,l] : loss)
        {
            if (l == 0) l0.push_back(k);
            if (l == 1) l1.push_back(k);
        }
        
        return {l0,l1};
        
        
    }
};