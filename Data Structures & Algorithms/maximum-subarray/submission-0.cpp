class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maxSum = nums[0];

        for(int n : nums){
            sum+=n;
            maxSum = max(maxSum, sum);
            if(sum<0){
                sum=0;
            }
           
        }
        return maxSum;
    }
};
