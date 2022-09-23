class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n;
        int mid;
        while(s <= e){
            mid = (s+e)/2;
            if(mid < n && nums[mid] == target){
                return (mid);
            }
            else if (mid < n && nums[mid] > target){
                e = mid-1;
            }
            else if (mid < n && nums[mid] < target){
                s = mid+1;
            }
            else return (-1);
        }
        return (-1);
    }

};