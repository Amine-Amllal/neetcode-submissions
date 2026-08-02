class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>temp;
        int res = 0, a, b;
        if(tokens.size()==1) return stoi(tokens[0]);
        for (const string c : tokens){
            if(c == "+" || c=="*" || c== "-" || c=="/"){
                switch(c[0]){
                    case '+':
                        b=temp.top();
                        temp.pop();
                        a=temp.top();
                        temp.pop();
                        res = a + b;
                        temp.push(res);
                        break;
                    case '*':
                        b=temp.top();
                        temp.pop();
                        a=temp.top();
                        temp.pop();
                        res = a * b;
                        temp.push(res);
                        break;
                    case '-':
                        b=temp.top();
                        temp.pop();
                        a=temp.top();
                        temp.pop();
                        res = a - b;
                        temp.push(res);
                        break;
                    case '/':      
                        b=temp.top();
                        temp.pop();
                        a=temp.top();
                        temp.pop();
                        res = a / b;
                        temp.push(res);
                        break;
                }
            }else{
                temp.push(stoi(c));
            }
        }
        return res;
    }
};
