class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==32){
              if(temp.size()==0) continue;
               vec.push_back(temp);
               temp.clear();
               while(s[i+1] == 32){
                   i++;
               }
            }
            else temp.push_back(s[i]);
        }
        if(temp.size()>0) {
          vec.push_back(temp);
        }
        reverse(vec.begin(),vec.end());
        string ans ;
        for(int i=0;i<vec.size();i++){
            if(i!=vec.size()-1)  ans += vec[i] + " ";
            else ans+=vec[i];
        }
        return ans;
    }
};