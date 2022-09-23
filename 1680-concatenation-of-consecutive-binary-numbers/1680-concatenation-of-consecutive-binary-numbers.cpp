class Solution {
public:
    int nob(int n){
        return log2(n) + 1;
    }
    int concatenatedBinary(int n) {
        long m = 1000000007;
        long ans = 0;
        for(int i = 1; i <= n; i++){
            int len = nob(i);
            ans = ((ans << len) % m + i) % m;
        }
        return ans;
    }
};