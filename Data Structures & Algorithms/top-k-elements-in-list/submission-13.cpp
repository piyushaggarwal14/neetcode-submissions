class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> count;
        for(int i : nums){
            count[i]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto &it : count){
            pq.push({it.second, it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int> ans;
       for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();       
        }
        return ans;
    }
};
