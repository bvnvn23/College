#include <iostream>
#include <limits>
#include <cctype>

float celsius(float temperature);
float fahrenheit(float temperature);

float temperature = 0;
char unit = 0;
bool keepRunning = true;

int main()
{
    while(keepRunning)
    {
        
        std::cout << "Enter the temperature:";
        std::cin >> temperature;
        
        if(std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a number." << std::endl; // Catching if the user enters a letter instead of a number!
            continue;
        }

        std::cout << "Pick the unit of the temperature C - To Celsius F - To Fahrenheit" << std::endl;
        std::cin >> unit;
        unit = tolower(unit);    



        switch(unit)
        {    
            case 'c':
            {    
                std::cout << "The temperature in Celsius is: " << celsius(temperature) << std::endl;
                keepRunning = false;
                break;
            }    
            case 'f':
            {
                std::cout << "The temperature in Fahrenheit is: " << fahrenheit(temperature) << std::endl;
                keepRunning = false;
                break;
            }
            default:
            {
                std::cout << "Wrong unit!" << std::endl;
                break;
            }
        }      
    }

    return 0;
}


float celsius(float temperature)
{
temperature = (temperature - 32) * 5 / 9;
    return temperature;
}

float fahrenheit(float temperature)
{
    temperature = (temperature * 9 / 5) + 32;
        return temperature;
}

