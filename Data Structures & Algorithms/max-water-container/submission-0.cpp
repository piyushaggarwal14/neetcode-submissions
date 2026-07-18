class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int maxAns = -1;
        while(i<j){
            maxAns = max((j-i)*min(heights[i],heights[j]), maxAns);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxAns;
    }
};
