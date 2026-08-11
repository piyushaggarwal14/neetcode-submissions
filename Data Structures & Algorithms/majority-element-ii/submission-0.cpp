class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int size = nums.size();
        vector<int> ans;

        for(int n : nums){
            m[n]++;
        }

        for(auto it : m){
             if(it.second > floor(size/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};