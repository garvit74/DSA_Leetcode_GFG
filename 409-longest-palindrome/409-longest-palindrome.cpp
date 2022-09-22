class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hss;
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            hss[s[i]]++;
        }
        
        for(auto x: hss){
            ans += x.second/2 * 2;
            if(x.second%2 == 1 && ans%2 == 0){
                ans++;
            }
        }
        return ans;
    }
};