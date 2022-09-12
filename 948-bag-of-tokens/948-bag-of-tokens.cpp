class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int score = 0;
        int ans = 0;
        sort(tokens.begin(), tokens.end());
        for(int i = 0, j = n-1; i <= j ;){
            if(power >= tokens[i]){
                power -= tokens[i];
                ++score;
                i++;
            }
            else if( score > 0){
                power += tokens[j];
                --score;
                --j;
            }
            else{
                break;
            }
            ans = max(ans, score);
        }
        return ans;
    }
};