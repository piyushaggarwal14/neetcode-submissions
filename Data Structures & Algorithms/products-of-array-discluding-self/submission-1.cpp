class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int product = 1;
            int zeroCount = 0;
            for(int n : nums){
                if(n==0){
                        zeroCount++;
                } else {
                    product*=n;
                }
            }

            vector<int> ans;
            for(int i=0;i<nums.size();i++){
                if(zeroCount>1){
                    ans.push_back(0);    
                }else if (zeroCount==1){
                    if(nums[i]==0){
                        ans.push_back(product);
                    }else{
                        ans.push_back(0);
                    }
                }else{
                     ans.push_back(product/nums[i]);
                }
            }
            return ans;
    }
};
