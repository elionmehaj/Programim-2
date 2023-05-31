#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> friends(n);

        for (int i = 0; i < n; i++) {
            friends[i] = i + 1;
        }

        int currentFriend = 0;

        while (friends.size() > 1) {
            currentFriend = (currentFriend + k - 1) % friends.size();
            friends.erase(friends.begin() + currentFriend);
        }

        return friends[0];
    }
};

int main() {
    Solution solution;

    int n = 5;
    int k = 2;

    int winner = solution.findTheWinner(n, k);

    cout << "The winner is: " << winner << endl;

    return 0;
}
