class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
       
        unordered_set<int> s;
        int win = min(n,k+1);
        for(int i=0;i<win;i++){
            if(s.count(nums[i])){
                return true;
            }
            s.insert(nums[i]);
        }
        int j=win;
        while(j<n){
            s.erase(nums[i]);
            i++;
            if(s.count(nums[j])){
                return true;
            }
            s.insert(nums[j]);
            j++;
        }
        return false;
    }
};