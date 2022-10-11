class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first =  bs(nums,target,true);
        int last = bs(nums,target,false);
        return vector<int>({first, last});
    }
    
    int bs(vector<int>& nums, int target, bool check){
        int ans = -1;
        int l = 0;
        int r = nums.size()-1;
        
        while(l <= r){
            int m = l + (r-l) / 2;
            if(target > nums[m]){
                l = m + 1;
            }
            else if(target < nums[m]){
                r = m - 1;
            }
            else{
                ans = m;
                if(check){
                    r = m - 1;
                }
                else {
                    l = m + 1;
                }
            }
        }
        return ans;
    }
};