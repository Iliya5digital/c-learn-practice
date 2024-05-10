#include <iostream>
 
int main()
{
    double rate {};     // обменный курс
    double sum {};      // сумма для конвертации
 
    std::cout << "Enter exchange rate: ";   // вводим обменный курс
    std::cin >> rate;
    std::cout << "Enter sum: ";   // вводим сумму для конвертации
    std::cin >> sum;
    const double output { sum / rate};  // конвертируем sum по курсу rate
    std::cout << sum << " rubles = " << output << "$";
}