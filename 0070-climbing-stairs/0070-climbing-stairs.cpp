class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int x = 2, y = 1, res;
        for (int i = 3; i <= n; i++) {
            res = x + y;
            y = x;
            x = res;
        }
        return res;
    }
};