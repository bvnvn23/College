#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    while (!myStack.empty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}
