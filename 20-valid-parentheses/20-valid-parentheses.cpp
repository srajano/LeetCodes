class Solution {
public:
    bool isValid(string s) {
        stack<char> op;
        for(char i: s) {
            switch(i) {
                case '{':
                case '[':
                case '(':
                    op.push(i);
                    break;
                case '}':
                    if((!op.empty()) && op.top() == '{') op.pop();
                    else return false;
                    break;
                case ']':
                    if((!op.empty()) && op.top() == '[') op.pop();
                    else return false;
                    break;
                case ')':
                    if((!op.empty()) && op.top() == '(') op.pop();
                    else return false;
                    break;
            }
        }
        if(op.empty()) return true;
        else return false;
    }
};