class Solution {
public:

    int execOp(string op, int a, int b) {

        if(op == "+") return a + b;

        if(op == "-") return a - b;

        if(op == "*") return a * b;

        return a / b;
    }

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack <int> s;
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.push(execOp(tokens[i],a,b));
            }else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
