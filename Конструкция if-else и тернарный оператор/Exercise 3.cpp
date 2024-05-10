#include <iostream>
  
int main()
{
    double number {};
 
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> number;
 
    if (number >= 1 && number <= 100)
    {
        if (number > 50)
            std::cout << "number is greater than 50" << std::endl;
        else if (number < 50)
            std::cout << "number is less than 50" << std::endl;
        else
            std::cout << "number = 50" << std::endl;
    }
    else
    {
        std::cout << "The number is outside the range [1, 100]" << std::endl;
    }
}