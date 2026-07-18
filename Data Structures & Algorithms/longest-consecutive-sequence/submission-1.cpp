class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLength = 0;
        int i=0;
        while(i<nums.size()){
            int found = true;
            int len = 1;
            int number = nums[i];
            while(found){
                number++;
                if(count(nums.begin(), nums.end(), number)>0){
                        len++;
                        continue;
                }
                found=false;
            }
            maxLength = max(maxLength, len);
            i++;
        }
        return maxLength;
    }
};
