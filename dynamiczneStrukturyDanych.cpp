#include <iostream>
using namespace std;

int main() {
    int* dynamicArray = new int[5];

    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i + 1;
        cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << endl;
    }

    delete[] dynamicArray;

    return 0;
}
