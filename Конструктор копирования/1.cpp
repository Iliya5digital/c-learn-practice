#include <iostream>
 
class Integer
{
public:
    Integer(int number)
    {
        value=number;
    }
    // конструктор копирования
    Integer(const Integer& obj)
    {
        value = obj.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};
 
int main()
{
    // переменная
    Integer num1 {10};
    num1.print(); 
 
    Integer num2{num1};     // копируем num1 в num2
    num2.print();
}