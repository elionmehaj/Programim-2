#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxDepth(const string& s) {
        int maxDepth = 0;
        int currentDepth = 0;

        for (char c : s) {
            if (c == '(') {
                currentDepth++;
                maxDepth = max(maxDepth, currentDepth);
            } else if (c == ')') {
                currentDepth--;
            }
        }
        return maxDepth;
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string with parentheses: ";
    cin >> input;

    int depth = solution.maxDepth(input);
    cout << "Maximum depth of parentheses: " << depth << endl;

    return 0;
}
