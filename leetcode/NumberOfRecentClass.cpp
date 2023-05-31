#include <iostream>
#include <queue>

using namespace std;

class RecentCounter {
private:
    queue<int> requests;

public:
    RecentCounter() {}

    int ping(int t) {
        requests.push(t);
        while (!requests.empty() && t - requests.front() > 3000) {
            requests.pop();
        }
        return requests.size();
    }
};

int main() {
    RecentCounter counter;

    cout << counter.ping(100) << endl; 
    cout << counter.ping(3001) << endl;
    cout << counter.ping(3002) << endl; 
    cout << counter.ping(7000) << endl;

    return 0;
}
