#include <iostream>
#include <cmath>
#include <limits>

float area(float a, float height)
{
    return (a * height) / 2;
};

float a, height;

int main()
{
    
    while(true) 
    {
        std::cout << "Enter the length of side a:";
        std::cin >> a;
        std::cout << "Enter the height of the triangle: ";
        std::cin >> height;

        if (a < 0 || height < 0) 
        {
            std::cout << "Invalid input. Please enter positive numbers only.\n";
        } else if(std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number." << std::endl;
        } else 
        {
            std::cout << "The area of the triangle is: " << area(a, height) << std::endl;
            break;
        }
    }

    return 0;
}


