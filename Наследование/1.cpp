#include <iostream>
 
class Animal    // класс животного
{
public:
    Animal(std::string name, unsigned weight): name{name}, weight(weight)
    {  }
    void print() const
    {
        std::cout << "Name: " << name << "\tWeight: " << weight << std::endl;
    }
private:
    std::string name;
    unsigned weight;
};
// класс собаки
class Dog: public Animal
{
public:
    Dog(std::string name, unsigned weight): Animal{name, weight} {}
};
 
// класс кошки
class Cat: public Animal
{
public:
    Cat(std::string name, unsigned weight): Animal{name, weight} {}
};
 
int main()
{
    Cat murzik{"Murzik", 20};
    murzik.print();
    Dog muhtar{"Muhtar", 35};
    muhtar.print();
}