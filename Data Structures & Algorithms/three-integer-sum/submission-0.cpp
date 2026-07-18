class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
         sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            vector<int> triplet;
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                            ans.insert({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
     return vector<vector<int>>(ans.begin(), ans.end());;
    }
};
