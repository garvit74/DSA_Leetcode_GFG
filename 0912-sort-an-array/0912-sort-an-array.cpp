class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>minh;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            minh.push(nums[i]);
        }
        vector<int>ans;
		while(!minh.empty()){
			ans.push_back(minh.top());
			minh.pop();
		}
		return ans;
    }
};