class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int s : stones){
            maxHeap.push(s);
        }

        while(maxHeap.size()>1){
            int f = maxHeap.top();
            maxHeap.pop();
            int s = maxHeap.top();
            maxHeap.pop();
            if(f==s){
                continue;
            }else {
                maxHeap.push(abs(f-s));
            }
        }
        if(maxHeap.empty()){
            return 0;
        }
        return maxHeap.top();
    }
};
