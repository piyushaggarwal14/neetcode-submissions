class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int s=0,e=n-1;
        int maxArea = 0;
        while(s<e){
            maxArea = max((e-s) * min(heights[s],heights[e]),maxArea);
            if(heights[s]<heights[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return maxArea;
    }
};
