#include <iostream>
 
class Integer
{
public:
    Integer(int number);
    int getValue();
    void setValue(int number);
    void print();
private:
    int value;
};
Integer::Integer(int number)
{
    value=number;
    std::cout << "Object created" << std::endl;
}
int Integer::getValue(){ return value; }
void Integer::setValue(int number) { value = number; }
void Integer::print()
{
    std::cout << "Value: " << value << std::endl;
}
 
int main()
{
    Integer n {10};                 // Object created.
    n.print();                      // Value: 10
    n.setValue(15);                 // изменяем значение
    n.print();                      // Value: 15
    n.setValue(n.getValue() * 2);   // изменяем значение
    n.print();                      // Value: 30
}