// Evaluate Reverse Polish Notation

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st; // use stack of int

        for (string &t : tokens) {
            if (t != "+" && t != "-" && t != "*" && t != "/") {
                st.push_back(stoi(t)); // push numbers
            } else {
                int b = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();

                if (t == "+") st.push_back(a + b);
                else if (t == "-") st.push_back(a - b);
                else if (t == "*") st.push_back(a * b);
                else st.push_back(a / b);
            }
        }

        return st.back();
    }
};
