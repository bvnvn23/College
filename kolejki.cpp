#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    while (!myQueue.empty()) {
        cout << myQueue.front() << endl;
        myQueue.pop();
    }

    return 0;
}
