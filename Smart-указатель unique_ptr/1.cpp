#include <iostream>
#include <memory>
 
int main()
{
    unsigned n {};  // количество элементов в массиве
    std::cout << "Enter array size: ";
    std::cin >> n;      // вводим количество элементов
    auto numbers{ std::make_unique<int[]>(n) };
    for (unsigned i {}; i < n; i++)
    {
        numbers[i] = i * i;
    }
     
    int sum {};     // сумма чисел
    for (unsigned i {}; i < n; i++)
    {
        sum += numbers[i];
    }
    std::cout << "Sum = " << sum << std::endl;
}