#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person person;
    person.name = "John";
    person.age = 30;

    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    return 0;
}
