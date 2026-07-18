class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int target, int index, vector<int> &curr){
        if(target==0){
            ans.push_back(curr);
            return;
        }

        if(index>=nums.size() || target<0){
            return;
        }

        //Include Current
        curr.push_back(nums[index]);
        solve(nums, target-nums[index], index, curr);
        curr.pop_back();

        //Exclude Current
        solve(nums,target, index+1, curr);
    }


    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        solve(nums, target,0, curr);
        return ans;
    }
};
