class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int ans = 0;
        for(string o : operations){
            if(o == "+"){
                int top = stack.top();
                stack.pop();
                int nTop = top + stack.top();
                stack.push(top);
                stack.push(nTop);
                ans +=nTop;
            }else if(o == "D"){
                stack.push(2*stack.top());
                ans+=stack.top();
            }else if(o == "C"){
                ans-=stack.top();
                stack.pop();
            }else{
                stack.push(stoi(o));
                ans+=stack.top();
            }
        }
        return ans;
    }
};