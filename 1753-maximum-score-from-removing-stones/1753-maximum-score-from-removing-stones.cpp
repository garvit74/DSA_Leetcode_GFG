class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int m1 = max(a,b);
        int m2 = max(m1,c);
        int sum = a+b+c;
        if(2*m2 > sum){
            return sum-m2;
        }
        return sum/2;
    }
};