#include <iostream>
#include <limits>

int hours = 0;
int minutes = 0;
int seconds = 0;
bool keepRunning = true;

int main()
{
    while(keepRunning)
    {
        std::cout << "****Hours, minutes, seconds converter****\n";
        std::cout << "Enter the number of hours: ";
        std::cin >> hours;
        std::cout << "Enter the number of minutes: ";
        std::cin >> minutes;
        std::cout << "Enter the number of seconds: ";
        std::cin >> seconds;
    
        if (hours < 0 || minutes < 0 || seconds < 0)
        {
            std::cout << "Invalid input. Please enter positive numbers only.\n";
        }
        else if (minutes > 59 || seconds > 59)
        {
            std::cout << "Invalid input. Please enter minutes and seconds less than 60.\n";
        }
        else if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number." << std::endl; // Catching if the user enters a letter instead of a number!
        }
        else
        {
            keepRunning = false;
        }
    }
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    std::cout << "The total number of seconds is: " << totalSeconds << "\n";
    return 0; 
}