class Solution {
public:
    int sum(int n){
        int sum =0;
        while(n>0){
            int i = n%10;
            sum = sum + (i*i);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1){
            if(s.count(n)) {
                return false;
            }
            s.insert(n);
            n = sum(n);
           
        }
        return true;

    }
};
