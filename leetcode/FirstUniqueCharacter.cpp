#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;

        for (char ch : s) {
            frequency[ch]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (frequency[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;

    string str = "leetcode";

    int index = solution.firstUniqChar(str);

    cout << "First unique character index: " << index << endl;

    return 0;
}
