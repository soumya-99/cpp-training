#include <iostream>
#include <stack>

using std::cout;
using std::string;
using std::stack;
using std::endl;

/**
 * @brief Function to return precedence of operators
 * '^' highest precedence
 * '/' and '*' have same precedence
 * '+' and '-' have same precedence
 * @param c operator
 * @return precedence of operator
 */
int precedence(char c) {
    if (c == '^') {
        return 3;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return -1;
    }
}

/**
 * @brief Function to convert infix expression to postfix expression
 * @param s type: string infix expression
 * @return postfix expression
 */
inline string infix_to_postfix(string s) {
    stack<char> st;
    string res;
    for (char c : s) {
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z')) {
            res += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    // string s = "(a-b/c)*(a/k-l)";
    string s = "(A+B/C*(D+E)-F)";
    cout << infix_to_postfix(s) << endl;
    return 0;
}