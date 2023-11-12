#include <iostream>

float celsius(float temperature);
float fahrenheit(float temperature);

float temperature = 0;
char unit = 0;
bool loop = 1;

int main()
{
    while(loop = 1)
    {
        std::cout << "Enter the temperature:";
        std::cin >> temperature;
        std::cout << "Pick the unit of the temperature C - To Celsius F - To Fahrenheit" << std::endl;
        std::cin >> unit;
        unit = tolower(unit);
        
        switch(unit)
        {    
            case 'c':
            {    
                std::cout << "The temperature in Celsius is: " << celsius(temperature) << std::endl;
                loop = 0;
                break;
            }    
            case 'f':
            {
                std::cout << "The temperature in Fahrenheit is: " << fahrenheit(temperature) << std::endl;
                loop = 0;
                break;
            }
        }        
    break;
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

