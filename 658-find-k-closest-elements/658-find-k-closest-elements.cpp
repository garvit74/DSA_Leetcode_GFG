class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector< pair<int, int>> vec;
        vector< int> ans;
        for(auto it: arr){
            vec.push_back({abs(x - it), it});
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};