#include <iostream>
  
int main()
{
    int a {};
    int b {};
    std::cout << "Enter a first number: ";
    std::cin >> a;
    std::cout << "Enter a second number: ";
    std::cin >> b;
    std::cout << (a > b ? "a > b": (a < b?"a < b": "a=b")) << std::endl;
}