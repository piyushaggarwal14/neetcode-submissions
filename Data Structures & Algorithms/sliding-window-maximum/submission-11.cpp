class Solution {
public:

    pair<int,int> findMax(vector<int>& nums, int s, int e){
        int maxAns = -1;
        int index=-1;
        for(int i=s;i<=e;i++){
            if(maxAns<nums[i]){
            maxAns=max(maxAns,nums[i]);
            index=i;
            }
        }
        return {index, maxAns};;
    }


    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int s=0,e=k-1;
        int maxAns = -1;
        int index=-1;

        pair<int,int> firstMax = findMax(nums,s,e);
        maxAns = firstMax.second;
        index = firstMax.first;

        vector<int> ans;
        ans.push_back(maxAns);

        while(e<n-1){
            if(s==index){
               s++;e++;
               pair<int,int> firstMax = findMax(nums,s,e);
               maxAns = firstMax.second;
               index = firstMax.first;
               ans.push_back(maxAns);

            }else{
                s++;e++;
                if(nums[e]>maxAns){
                    maxAns = nums[e];
                }
                ans.push_back(maxAns);
            }
        }
        return ans;
    }
};
