#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int num : nums) {
            if (num > 0) {
                positiveCount++;
            } else if (num < 0) {
                negativeCount++;
            }
        }

        return max(positiveCount, negativeCount);
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, -2, 3, -4, 5};

    int maxCount = solution.maximumCount(nums);
    cout << "Maximum Count: " << maxCount << endl;

    return 0;
}
