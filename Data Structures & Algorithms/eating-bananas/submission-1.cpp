class Solution {
public:
int computeTime(vector<int>& piles, int k){
    long long sum=0;
    for(int i=0;i<piles.size();i++){
        sum+=ceil((double)piles[i]/k);
    }
    return (int)sum;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int s=1;
        int e = *max_element(piles.begin(), piles.end());
        int ans=e;

        while(s<=e){
            int m = (s+e)/2;
            int timeTaken = computeTime(piles,m);
            if(timeTaken<=h){
                ans=m;
                e=m-1;
            }else if(timeTaken>h){
                s=m+1;
            }
        }
        return ans;

    }
};
