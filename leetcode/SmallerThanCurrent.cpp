#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {8, 1, 2, 2, 3};

    vector<int> result = solution.smallerNumbersThanCurrent(nums);
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
