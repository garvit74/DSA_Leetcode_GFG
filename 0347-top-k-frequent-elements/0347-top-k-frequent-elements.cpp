class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>mpp;
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> hp;
        
        for(auto &it: mpp){
            hp.push({it.second, it.first});
            if(hp.size() > k){
                hp.pop();
            }
        }
        vector<int>ans;
        while(!hp.empty()){
            ans.push_back(hp.top().second);
            hp.pop();
        }
        
        return ans;
    }
};