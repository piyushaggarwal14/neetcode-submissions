class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer, Integer> umap = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(umap.containsKey(nums[i])){
                return true;
            }
            umap.put(nums[i],1);
        }
        return false;
    }
}