#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        string numStr = to_string(num);

        for (char& c : numStr) {
            if (c == '6') {
                c = '9';
                break;
            }
        }

        return stoi(numStr);
    }
};

int main() {
    Solution solution;

    int num = 9669;
    int maxNum = solution.maximum69Number(num);

    cout << "Maximum Number: " << maxNum << endl;

    return 0;
}
