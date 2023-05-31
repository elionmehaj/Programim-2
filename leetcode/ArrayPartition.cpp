#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i]; 
        }

        return sum;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 4, 3, 2, 5, 6};

    int pairSum = solution.arrayPairSum(nums);

    cout << "Array Pair Sum: " << pairSum << endl;

    return 0;
}
