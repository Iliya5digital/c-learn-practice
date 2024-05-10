#include <iostream>
#include <string>
 
int add(int, int);
double add(double, double);
std::string add(const std::string&, const std::string&);
 
int main()
{
    int a{3},  b{4};
    const int c {add(a, b)};
    std::cout << a << " + " << b << " = " << c << std::endl;
   
    double x{3.1}, y{4.2};
    const double z {add(x, y)};
    std::cout << x << " + " << y << " = " << z << std::endl;
   
    // сложение строк std::string
    const std::string s1 {"aaa"};
    const std::string s2 {"bbb"};
    const std::string s3 {add(s1, s2)};
    std::cout << s1 << " + " << s2 << " = " << s3 << std::endl;
 
    // сложение строковых литералов
    const std::string s4 {add("he", "llo")};
    std::cout << "he + llo = " << s4 << std::endl;
}
 
// сложение двух целых чисел
int add(int a, int b)
{
    return a + b;
}
 
// сложение двух чисел с плавающей точкой
double add(double x, double y)
{
    return x + y;
}
 
// сложение двух строк
std::string add(const std::string& s1, const std::string& s2)
{
    return s1 + s2;
}