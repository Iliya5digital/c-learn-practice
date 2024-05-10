#include <iostream>
  
int main()
{
    int a {};
    int b {};
    std::cout << "Enter a first number: ";
    std::cin >> a;
    std::cout << "Enter a second number: ";
    std::cin >> b;
     
    // 0 преобразуется в false в C++
    // соответственно, если b = 0, переходим к блоку else
    if(b)  
    {
        // аналогично деление без остатка означает, что a % b == 0
        if(a % b)
        {
            std::cout << "a and not devisible" << std::endl;
        }
        else
        {
            std::cout << "a and b devisible" << std::endl;
        }
    }
    else
    {
        std::cout << "Panic! b = 0! Bad data!" << std::endl;
    }
     
}