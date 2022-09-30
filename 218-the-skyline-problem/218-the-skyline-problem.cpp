#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        priority_queue<pair<int,int>> pq;
        vector<int>cnt;
        for(auto b: buildings){
            cnt.push_back(b[0]);
            cnt.push_back(b[1]);
        }
        
        sort(cnt.begin(), cnt.end());
        int m = unique(cnt.begin(), cnt.end()) - cnt.begin();
        int j = 0;
        
        int preH = 0;
        vector<vector<int>> ans;
        
        for(int i = 0; i < m; i++){
            while(j<buildings.size() && buildings[j][0] <= cnt[i]){
                pq.push(make_pair(buildings[j][2], buildings[j][1]));
                j++;
            }
            
            while(!pq.empty() && pq.top().second <= cnt[i]){
                pq.pop();
            }
            
            int nowH = pq.empty() ? 0 : pq.top().first;
            
            if(nowH != preH){
                ans.push_back({cnt[i],nowH});
                preH = nowH;
            }
        }
        return ans;
        
    }
};