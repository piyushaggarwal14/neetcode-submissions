class Solution {
public:

    vector<vector<int>> dp;
    bool subsetSum(vector<int>& nums,int index, int sum){
        if(sum==0){
            return true;
        }

        if(index>=nums.size() || sum<0){
            return false;
        }

        if(dp[index][sum]!=-1){
            return dp[index][sum];
        }

        //include current element
        bool take = subsetSum(nums,index+1, sum-nums[index]);

        //exclude
        bool notTake = subsetSum(nums,index+1, sum);
        
        return  dp[index][sum] =
               (take || notTake);
    }

    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        dp.resize(nums.size(),
          vector<int>(sum + 1, -1));
        return subsetSum(nums,0,sum/2);
        
    }
};
