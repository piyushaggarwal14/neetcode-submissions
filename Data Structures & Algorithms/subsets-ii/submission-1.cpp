class Solution {
public:
    set<vector<int>> res;
    void backtrack(vector<int>&nums, int index, vector<int> subset){
        if(index==nums.size()){
            res.insert(subset);
            return;
        }

        subset.push_back(nums[index]);
        backtrack(nums, index+1, subset);
        subset.pop_back();
        backtrack(nums, index+1, subset);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> curr;
        backtrack(nums,0,curr);
        return vector<vector<int>>(res.begin(),res.end());
    }
};
