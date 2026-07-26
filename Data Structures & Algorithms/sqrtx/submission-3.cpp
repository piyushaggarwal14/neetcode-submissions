class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        int j=x;
        int ans =0;
        while(i<=j){
            int m = (i+j)/2;
            if((long long) m*m>x){
                j=m-1;
            }else if((long long) m*m<x){
                i=m+1;
                ans = m;
            }else{
                return m;
            }
        }
        return ans;

    }
};