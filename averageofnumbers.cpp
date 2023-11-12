// Comments added for my beginner friends from studies to better understand the code.

#include <iostream> // Standard library
#include <limits> // Inlcuding the limits library to catch the error when the user enters a letter instead of a number
#include <vector>  // Including the vector library

float average(std::vector<float> numbers);

int main()
{
    std::cout << "****Average of numbers****" << std::endl;
    
    std::vector<float> numbers;           // Vector to store the numbers
    float number;                 
    std::cout << "To stop entering numbers, enter a letter!" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> number;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // If the user enters a letter instead of a number loop will break!
                break;
            }
            else
            {
                numbers.push_back(number);
            }
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << ",";   // Printing the numbers in the vector
    }
    
    std::cout << "The average of the numbers is: " << average(numbers) << std::endl;
}


float average(std::vector<float> numbers)
{
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++)    // Function calculates the average of the numbers in the vector
    {
        sum += numbers[i];
    }
    return sum / numbers.size();
}