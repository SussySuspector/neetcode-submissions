class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<char> stack;
        for (string s : operations){
                if (s == "C"){
                    stack.pop();
                }
                else if (s == "+"){
                    int a = stack.top();
                    stack.pop();
                    int b = stack.top();
                    stack.push(a);
                    stack.push(a + b);
                }
                else if (s == "D"){
                    stack.push(stack.top() * 2);
                }else{
                    stack.push(stoi(s));
                }
        }
        int res = 0;
        while(!stack.empty()){
            res += stack.top();
            stack.pop();
        }
        return res;
    }

};