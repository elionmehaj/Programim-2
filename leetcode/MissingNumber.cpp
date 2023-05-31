#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int sum = (n * (n + 1)) / 2;
        
        int arraySum = 0;
        for (int num : nums) {
            arraySum += num;
        }
        
        int missingNum = sum - arraySum;
        
        return missingNum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 3, 4, 5};

    int missingNumber = solution.missingNumber(nums);
    cout << "Missing Number: " << missingNumber << endl;

    return 0;
}
