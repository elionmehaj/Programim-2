#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;

        for (char ch : s) {
            if (ch == 'L') {
                balance++;
            } else {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;

    string str = "RLRRLLRLRL";

    int balancedCount = solution.balancedStringSplit(str);

    cout << "Balanced String Count: " << balancedCount << endl;

    return 0;
}
