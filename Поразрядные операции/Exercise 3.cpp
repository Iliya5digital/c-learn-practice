#include <iostream> 
 
int main()
{
    unsigned int color {0x04F1A2u};     // переменная, которая хранит цвет
    unsigned int mask {0xFFu};          // маска для получения цветовых компонент
 
    // получаем значение красного цвета
    unsigned int red {(color >> 16) & mask};
    // получаем значение зеленого цвета
    unsigned int green {(color >> 8) & mask};
    // получаем значение синего цвета
    unsigned int blue {color & mask};
 
    std::cout << "Red: " << red << std::endl;     
    std::cout << "Green: " << green << std::endl;    
    std::cout << "Blue: " << blue << std::endl;
 
    // с помощью std::hex можно получить шестнадцатиричное значение
    std::cout << "red: " << std::hex << red << std::endl;
    std::cout << "green: " << std::hex << green << std::endl;
    std::cout << "blue: " << std::hex << blue << std::endl;
}