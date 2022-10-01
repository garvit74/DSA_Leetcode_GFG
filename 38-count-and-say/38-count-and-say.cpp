class Solution {
public:
    string inttostr(int n){
        if(n == 1) return "1";
        string ans;
        while(n){
            ans =  (char)(n%10 + '0') + ans;
            n = n/10;
        }
        return ans;
    }
    
    string countAndSay(int n){
        string ans = "1"; 
        int i = 2;
        while(i <= n){
            string temp;
            for(int x = 0; x<ans.length();){
                int cnt = 1;
                while(x < ans.length()-1 && ans[x] == ans[x+1]){
                    cnt++; 
                    x++;
                }
                temp = temp +  inttostr(cnt) + ans[x]; 
                x++;
            }
            ans = temp;
            i++;
        }
        return ans;
    }
    
};