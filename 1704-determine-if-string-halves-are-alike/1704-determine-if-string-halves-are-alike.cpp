class Solution {
public:
    bool vowlcheck(char a){
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            return true;
        }
        return false;
    }
    
    bool halvesAreAlike(string s) {
        int n = s.size();
        int x = n/2;
        int cnt_a = 0;
        int cnt_b = 0;
        for(int i = 0; i < x; i++){
            if(vowlcheck(s[i])){
                cnt_a++;
            }
            if(vowlcheck(s[x+i])){
                cnt_b++;
            }
        }
        
        if(cnt_a == cnt_b){
            return true;
        }
        return false;
    }
};