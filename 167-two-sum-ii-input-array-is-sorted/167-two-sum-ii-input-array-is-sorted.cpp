class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<pair<int, int>> vec;
		int n = numbers.size();
		for (int i = 0; i < n; i++) vec.push_back({numbers[i], i});
		int i = 0, j = n - 1;
		while (i < j) {
			if (vec[i].first + vec[j].first == target)
				return {vec[i].second+1, vec[j].second+1};
			else if (vec[i].first + vec[j].first < target)
				i++;
			else
				j--;
		}
		return {};
    }
};