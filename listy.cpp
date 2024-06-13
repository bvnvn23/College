#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5};

    for (int value : myList) {
        cout << value << endl;
    }

    return 0;
}
