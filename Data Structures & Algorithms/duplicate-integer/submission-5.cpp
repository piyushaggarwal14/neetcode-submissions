class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int n : nums){
            if(m.count(n)!=0){
                return true;
            }
            m[n]++;
        }
        return false;
    }
};