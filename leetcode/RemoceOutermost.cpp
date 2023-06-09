#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(const string& s) {
        string result = "";
        stack<char> parenthesesStack;

        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                parenthesesStack.push('(');
            } else if (s[i] == ')') {
                parenthesesStack.pop();
                if (parenthesesStack.empty()) {
                    result += s.substr(start + 1, i - start - 1);
                    start = i + 1;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    string s = "(()())(())";

    string result = solution.removeOuterParentheses(s);
    cout << "Result: " << result << endl;

    return 0;
}
