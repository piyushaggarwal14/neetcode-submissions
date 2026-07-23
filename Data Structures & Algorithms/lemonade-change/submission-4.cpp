class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int countFive=0;
        int countTen=0;
        int countTwenty=0;

        for(int b : bills){
            if(b==5){
                countFive++;
            }else if(b==10){
                if(countFive<1){
                    return false;
                }
                countFive--;
                countTen++;
            }else if(b==20){
                if((countTen<1 && countFive<3)||countFive<1){
                    return false;
                }
                if(countTen>0 && countFive>0){
                    countTen--;
                    countFive--;
                }else if(countTen<1 && countFive>2){
                    countFive-=3;
                }
                countTwenty++;
            }
        }
        return true;
    }
};