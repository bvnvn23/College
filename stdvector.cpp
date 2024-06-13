#include <iostream>
#include <vector>

int main() {
    // Utworzenie wektora typu int
    std::vector<int> numbers;

    // Dodawanie elementów do wektora
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Dostęp do elementów za pomocą operatora indeksowania
    std::cout << "Pierwszy element: " << numbers[0] << std::endl;
    std::cout << "Drugi element: " << numbers[1] << std::endl;

    // Iterowanie po elementach wektora za pomocą pętli for
    std::cout << "Wszystkie elementy wektora: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Iterowanie po elementach wektora za pomocą pętli for-each
    std::cout << "Wszystkie elementy (for-each): ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Usuwanie ostatniego elementu
    numbers.pop_back();

    // Wypisywanie elementów po usunięciu ostatniego
    std::cout << "Elementy po usunięciu ostatniego: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}