class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=n-1;
        int m;
        if(target<=nums[l]){
            return 0;
        }
        while(l<=r){
            m = (l+r)/2;
            if(nums[m]<target){
                l=m+1;
            }else if(nums[m]>target){
                r=m-1;
            }else{
                return m;
            }
        }
        return l;
    }
};