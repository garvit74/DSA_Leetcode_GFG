class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        int start = prices[0];
        
        for(int i = 1; i < n; i++){
            if(start < prices[i]){
                ans = max(prices[i] - start, ans);
            }
            else {
                start = prices[i];
            }
        }
        return ans;
    }
};