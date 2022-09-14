class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sums;
        int sum = 0;
        for(auto x: nums){
            sum += x;
            sums.push_back(sum);
        }
        return sums;
    }
};