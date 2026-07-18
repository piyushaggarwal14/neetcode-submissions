#include <bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i=0;i<prices.size()-1;i++){
            int buy = prices[i];
            int sell = buy;
            for(int j=i+1;j<prices.size();j++){
               sell = max(sell,prices[j]);
            }
            maxProfit = max(maxProfit, sell - buy);
        }
        return maxProfit;
    }
};
