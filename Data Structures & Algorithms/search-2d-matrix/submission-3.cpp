class Solution {
public:
    bool binarySearch(vector<vector<int>>& matrix, int target, int row) {
         int m = matrix.size();
         int n = matrix[0].size();
         int l=0,r=n-1;
         while(l<=r){
           int mid = (l+r)/2;
           if(matrix[row][mid]>target){
                r=mid-1;
           }else if(matrix[row][mid]<target){
                l=mid+1;
           }else{
                return true;
           }
         }
         return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size();
         int n = matrix[0].size();
         int a=0;

         while(a<m){
            if(matrix[a][0]<=target && matrix[a][n-1]>=target){
                return binarySearch(matrix,  target, a);
            }else{
                a++;
            }
         }
         return false;   
    }
};
