#include <iostream>
 
int main()
{
    int weight {};              // масса тела
    unsigned int s_height {};   // рост в сантиметрах
 
    std::cout << "Enter your weight: ";   // вводим массу в кг
    std::cin >> weight;
    std::cout << "Enter your height: ";   // вводим рост в см
    std::cin >> s_height;
    const double m_height { s_height / 100.0};  // вычисляем рост в метрах
    const double bmi {weight / (m_height * m_height)};  // вычисляем индекс массы тела
    std::cout << "Your BMI: " << bmi;
}