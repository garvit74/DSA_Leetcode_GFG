class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(0, n, nums, dp);
    }
	
	bool f(int ind, int n, vector<int>& nums, vector<int>& dp) {
        if(ind == n-1) return true;
        if(dp[ind] != -1) return dp[ind];
        
        int jump = nums[ind];
        bool check = false;
        for(int i = ind+1; i <= min(n-1, ind+jump); i++)
            check = check || f(i, n, nums, dp);
        
        return dp[ind] = check;
    }
};