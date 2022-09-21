class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum;
        for(int i=1 ;i<nums.size();i++){
            sum = nums[i-1];
            nums[i] = sum + nums[i];
        
        }
   return nums;
    }
     
};