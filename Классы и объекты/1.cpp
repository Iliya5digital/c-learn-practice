#include <iostream>
 
class Integer
{
public:
    Integer(int number)
    {
        value=number;
        std::cout << "Object created" << std::endl;
    }
    int getValue()  { return value; }
    void setValue(int number) { value = number; }
    void print()
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};
 
int main()
{
    Integer n {10};                 // Object created
    n.print();                      // Value: 10
    n.setValue(15);                 // изменяем значение
    n.print();                      // Value: 15
    n.setValue(n.getValue() * 2);   // изменяем значение
    n.print();                      // Value: 30
}