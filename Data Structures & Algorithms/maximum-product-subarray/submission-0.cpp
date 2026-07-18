class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];

        int currMin = 1, currMax = 1;
        for(int n : nums){
            int tmp = currMax * n;
            currMax = max(max(tmp,n*currMin), n);
            currMin = min(min(tmp,n*currMin), n);
            ans = max(ans, currMax);
        }
        return ans;
    }
};
