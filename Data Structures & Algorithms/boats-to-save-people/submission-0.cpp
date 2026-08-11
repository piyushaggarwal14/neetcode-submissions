class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int ans =0;
        int s=0,e=n-1;

        sort(people.begin(),people.end());
        while(s<=e){
            if(s==e){
                ans++;
                break;;
            }
           if(people[s]+people[e]<=limit){
                ans++;
                e--;
                s++;
           }else if(people[s]+people[e]>limit){
                ans++;
                e--;
            }
        }
        return ans;
    }
};