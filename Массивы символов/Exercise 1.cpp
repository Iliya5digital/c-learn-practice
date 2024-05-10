#include <iostream>
 
int main()
{
    const int max {100};    // максимальная длина строки - не больше 100 символов
    char string[max];       // массив для ввода строки
 
    std::cout << "Enter a string: ";
    std::cin.getline(string, max);    // вводим строку
   
    // подсчет количества символов
    int count{};
    for (; count < max && string[count] != '\0'; ++count) {}
    std::cout << "Characters count: " << count << std::endl;
 
    // выводим в обратном порядке
    for (int i{ 1 }; i <= count; ++i)
    {
        std::cout << string[count - i];
    }
    std::cout << std::endl;
}