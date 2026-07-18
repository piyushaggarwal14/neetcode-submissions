class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int n : nums){
            count[n]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> heap;

        for(auto& e : count){
            heap.push({e.second,e.first});
            if(heap.size()>k){
                heap.pop();
            }
        }

            vector<int> res;
            for(int i=0;i<k;i++){
                res.push_back(heap.top().second);
                heap.pop();
            }
            return res;
    }

};
