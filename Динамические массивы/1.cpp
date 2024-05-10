#include <iostream>
 
int main()
{
    unsigned n {};  // количество элементов в массиве
    std::cout << "Enter array size: ";
    std::cin >> n;      // вводим количество элементов
    auto* numbers{ new int[n] };
    for (unsigned i {}; i < n; i++)
    {
        *(numbers+i) = i * i;   // с помощью нотации указателя
    }
     
    int sum {};     // сумма чисел
    for (unsigned i{}; i < n; i++)
    {
        sum += numbers[i];  // с помощью синтаксиса массивов
    }
 
    std::cout << "Sum = " << sum << std::endl;
   
    delete[] numbers;
}