class Solution {
public:
    static bool comp(vector<int> &begin, vector<int> &end){
        if(begin[0] != end[0]){
            return begin[0]>end[0];
        }
        else{
            return begin[1]<end[1];
        }
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),comp);
        int maxTillNow = INT_MIN;
        int ans=0;
        for(auto p:properties){
            if(maxTillNow>p[1]) ans++;
            else maxTillNow=p[1];
        }
        return ans;
    }
};