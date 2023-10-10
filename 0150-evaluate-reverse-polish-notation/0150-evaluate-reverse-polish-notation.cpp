class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int solution = 0;
        for(int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                string s1 = s.top();
                s.pop();
                string s2 = s.top();
                s.pop();
                int i1 = stoi(s1);
                int i2 = stoi(s2);
                if (tokens[i] == "+") {
                    solution = (i1 + i2);
                } else if (tokens[i] == "-") {
                    solution = (i2 - i1);
                } else if (tokens[i] == "/") {
                    solution = (i2 / i1);
                } else if (tokens[i] == "*") {
                    solution = (i2 * i1);
                }
                s.push(to_string(solution));
            } else {
                string w1 = tokens[i];
                s.push(w1);
            }
        }
        return stoi(s.top());
    }
};
