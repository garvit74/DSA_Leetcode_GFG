class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if(n == 0) return 0;
        vector<int>l(n), r(n);
        l[0] = h[0];
        r[n-1] = h[n-1];
        int ans = 0;
        for(int i = 1;i < n;i++){
            l[i] = max(l[i-1], h[i]);
            r[n-i-1] = max(h[n-i-1], r[n-i]);
        }
        for(int i = 0; i < n; i++){
            ans += (min(l[i],r[i]) - h[i]); 
        }
        return ans;
    }
};