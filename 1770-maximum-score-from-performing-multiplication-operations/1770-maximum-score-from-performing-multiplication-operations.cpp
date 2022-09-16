class Solution {
public:
    int solve(vector<int>& n, vector<int>& m,int i,int ns,int j, vector<vector<int>>& dp)
    {
        if(i == m.size()){
            return 0;
        }
        if(dp[i][j] != INT_MIN){
            return dp[i][j];
        }
        int left = solve(n, m, i+1, ns, j+1, dp) + n[j]*m[i];
        int right = solve(n, m, i+1, ns, j, dp) + n[ns-1-(i-j)]*m[i];
        return dp[i][j] = max(left, right);
    }
    int maximumScore(vector<int>& n, vector<int>& m) {
        int ms = m.size();
        int ns = n.size();
        vector<vector<int>>dp(ms+1,vector<int>(ms+1,INT_MIN));
        return solve(n, m, 0, ns, 0, dp);
    }
};