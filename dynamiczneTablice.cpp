#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* dynamicArray = new int[size]; // Dynamiczna alokacja tablicy

    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
        cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << endl;
    }

    delete[] dynamicArray; // Zwolnienie dynamicznie zaalokowanej pamięci

    return 0;
}
