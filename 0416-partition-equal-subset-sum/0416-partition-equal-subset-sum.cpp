class Solution {
public:
    bool equalsum(vector<int>& nums, int sum, int size){
        bool t[size+1][sum+1];
        for(int i = 0; i < size+1; i++){
            for(int j = 0; j < sum + 1; j++){
                if(i == 0){
                    t[i][j] = false;
                }
                if(j == 0){
                    t[i][j] = true;
                }
            }
        }
        
        for(int i = 1; i < size+1; i++){
            for(int j = 1; j < sum + 1; j++){
                if(nums[i-1] <= j){
                    t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
         return t[size][sum];
    }
    
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int i = 0; i < n; i++){
            s += nums[i];
        }
        bool res = false;
        if(s%2 == 0){
            res = equalsum(nums, s/2, n);
        }
        return res;
    }
};