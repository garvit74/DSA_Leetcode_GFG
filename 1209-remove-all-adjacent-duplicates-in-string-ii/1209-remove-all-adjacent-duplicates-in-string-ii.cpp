class Solution {
public:
    string removeDuplicates(string s, int k) {
        string result;
        stack<pair<char,int>> st;
        int cnt = 1;
        for(int i = 0;i < s.size(); i++){
            if(st.empty()){
                st.push({s[i],1});
                continue;
            }
            if(st.top().first == s[i] ){
                if(st.top().second == k-1){
                    for(int j = 0; j < k-1; j++){
                        st.pop();
                    }
                }
                else{
                    st.push({s[i],st.top().second + 1});
                }
            }
            else if(st.top().first != s[i]){
                st.push({s[i],1});
            }
        }
        
        string ans ="";
        while(!st.empty()){
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};