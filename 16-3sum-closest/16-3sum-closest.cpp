class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closest=INT_MAX;
        int closest_sum=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<=n-3;i++){
            
            int new_tar=target-nums[i];
            
            //find 2 numbers whose sum is closest to new_target
            
            int curr_closest=INT_MAX;
            int curr_closest_sum=0;
            int j=i+1,k=n-1;
            
            while(j<k){
                int sum = nums[j] + nums[k];
                //chekck the closeness
                if(abs(new_tar-sum)<curr_closest){
                    curr_closest=abs(new_tar-sum);
                    curr_closest_sum=sum;
                }
                if(sum==new_tar)
                    return nums[i] + sum;
                if(sum>new_tar)
                    k--;
                else
                    j++;
            }
            
            if(abs(target-(nums[i]+curr_closest_sum))<closest){
                closest=abs(target-(nums[i]+curr_closest_sum));
                closest_sum=nums[i]+curr_closest_sum;
            }
        }
        
        return closest_sum;
    }
};