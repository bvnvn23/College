#include <iostream>
#include <limits>

int width = 0;
int height = 0;

int main()
{
    while(true)
    {
        std::cout << "Enter the width of the rectangle: ";
        std::cin >> width;
        std::cout << "Enter the height of the rectangle: ";
        std::cin >> height;
        
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
        else
        {
            break;
        }
    }
    int area = width * height;
    std::cout << "The area of the rectangle is: " << area << "\n";
    return 0; 
}
