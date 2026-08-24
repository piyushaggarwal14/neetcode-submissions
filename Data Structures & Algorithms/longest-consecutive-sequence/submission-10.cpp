class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> store(nums.begin(), nums.end());

        for(int n : nums){
            if(store.find(n-1) == store.end()){
                int length = 1;
                while(store.find(n+length)!=store.end()){
                    length++;
                }
                 ans=max(ans,length);
            }
        }
         return ans;
    }
};
