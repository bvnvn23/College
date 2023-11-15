#include <iostream>
#include <limits>
#include <cmath>

float area(float width, float height);
float diagonal(float width, float height);

float width = 0;
float height = 0;
char operation = '0';

int main()
{
    while(true)
    {
        std::cout << "****Rectangle area and diagonal calculator****\n";
        
        std::cout << "Enter the width of the rectangle: ";
        std::cin >> width;
        std::cout << "Enter the height of the rectangle: ";
        std::cin >> height;
        std::cout << "Pick operation:\n";
        std::cout << "1. Calculate area\n";
        std::cout << "2. Calculate diagonal\n";
        std::cout << "3. Exit\n";
        std::cin >> operation;
        switch(operation)
        {
            case '1':
            {
                std::cout << "The area of the rectangle is: " << area(width, height) << "\n";
                break;
            }
            case '2':
            {
                std::cout << "The diagonal of the rectangle is: " << diagonal(width, height) << "\n";
            }
            case '3':
            {
                exit(0);
            }
        }    
    }
    return 0;
}    


float area(float width, float height)
{
    if (width < 0 || height < 0)
        {
            std::cout << "Invalid input. Please enter positive numbers only.\n";
        }
        else if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number." << std::endl;
        }
    
    return width * height;
}

float diagonal(float width, float height)
{
    if (width < 0 || height < 0)
    {
        std::cout << "Invalid input. Please enter positive numbers only.\n";
    }
    else if(std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input! Please enter a number." << std::endl;
    }

    return sqrt((width * width) + (height * height));
}
