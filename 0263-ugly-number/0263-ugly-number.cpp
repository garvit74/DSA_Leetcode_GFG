class Solution {
public:
    bool isUgly(int n) {
        bool ans = false;
        if(n <= 0) return ans;
        if(n == 1) return true;
        while(n > 1){
            if(n%2 == 0){
                n = n/2;
                ans = true;
            }
            else if(n%3 == 0){
                n = n/3;
                ans = true;
            }
            else if(n%5 == 0){
                n = n/5;
                ans = true;
            }
            else{
                ans = false;
                return ans;
            }
            
        }
    return ans;
    }
};