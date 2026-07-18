class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int n : nums){
            if(s.count(n)){
                s.erase(n);
            }else{
                s.insert(n);
            }
        }
        return *s.begin();
    }
};
