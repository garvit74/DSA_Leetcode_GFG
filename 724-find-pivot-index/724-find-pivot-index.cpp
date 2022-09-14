class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int lsum = 0;
        for(int i = 0; i < nums.size();i++){
            sum += nums[i];
        }
        int x = 0;
        for(int i = 0; i < nums.size() ;i++){
            x = sum - lsum - nums[i];
            if(x == lsum) return i;
            lsum += nums[i];
        }
        return -1;
    }
};