class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        int xoverlap = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);
        int yoverlap = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);

        if(xoverlap>0 && yoverlap>0)
            return true;
        
        return false;
    }
};