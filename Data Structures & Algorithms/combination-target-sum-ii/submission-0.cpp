class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target, int index,  vector<int>& curr) {
        if(target==0){
            ans.push_back(curr);
            return;
        }

        if(index>=candidates.size()|| target<0){
            return;
        }

        //Add one
        curr.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index+1,curr);
        curr.pop_back();

        // skip all duplicates
        int next = index + 1;

        while(next < candidates.size() &&
            candidates[next] == candidates[index]) {
            next++;
        }
        //Dont include
        solve(candidates,target,next,curr);
    }  

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),
             candidates.end());
        vector<int> curr;
        solve(candidates, target,0, curr);
        return ans;
    }
};
