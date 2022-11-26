class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> mxh;
        for(int i = 0; i < points.size(); i++){
            int x = points[i][0]*points[i][0];
            int y = points[i][1]*points[i][1];
            int dis =  x+y;
            mxh.push({dis, {points[i][0],points[i][1]}});
            while(mxh.size() > k){
                mxh.pop();
            }
        }
        vector<vector<int>>ans;
        while(!mxh.empty()){
            vector<int>temp;
            temp.push_back(mxh.top().second.first);
            temp.push_back(mxh.top().second.second);
            ans.push_back(temp);
            mxh.pop();
        }
        return ans;
    }
};