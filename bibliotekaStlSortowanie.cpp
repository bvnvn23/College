#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector = {5, 3, 8, 1, 2};

    sort(myVector.begin(), myVector.end());

    for (int value : myVector) {
        cout << value << " ";
    }

    return 0;
}
