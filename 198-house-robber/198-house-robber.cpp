class Solution {
public:    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        
        // int dp[n+1];
        // dp[0] = 0;
        int a = 0;
        // dp[1] = nums[0];
        int b = nums[0];
        int c;
        
        for(int i = 1; i < n; i++){
            // dp[i+1] = max(dp[i], dp[i-1]+nums[i]);
            c = max(b, a+nums[i]);
            a = b;
            b = c;
        }
        
        return c;
    }
};