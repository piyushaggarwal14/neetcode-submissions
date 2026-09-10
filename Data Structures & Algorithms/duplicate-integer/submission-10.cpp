class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i : nums){
            if(m.count(i)!=0){
                return true;
            }
            m[i]++;
        }
        return false;
    }
};