/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int j=n;
        while(i<=j){
            int p = (i+j)/2;
            if(guess(p)==0){
                return p;
            }else if(guess(p)==-1){
                j=p-1;
            }else if(guess(p)==1){
                i=p+1;
            }
        }
    }
};