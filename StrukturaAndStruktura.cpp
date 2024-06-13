#include <iostream>
using namespace std;

// Definicja struktury Address
struct Address {
    string street;
    string city;
    int zipCode;
};

// Definicja struktury Person
struct Person {
    string name;
    int age;
    Address address; // Pole typu Address
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address.street << ", " << address.city << ", " << address.zipCode << endl;
    }
};

int main() {
    // Tworzenie obiektu struktury Person
    Person person;
    person.name = "John";
    person.age = 30;
    person.address.street = "123 Main St";
    person.address.city = "New York";
    person.address.zipCode = 10001;

    // Wyświetlanie informacji o osobie
    person.displayInfo();

    return 0;
}
