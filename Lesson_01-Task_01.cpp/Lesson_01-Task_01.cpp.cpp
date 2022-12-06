#include <iostream>

// Глобальные переменные
int x1;
int x2;

int main()
{
    // Константы
    const int x3 = 3;
    const int x4 = 4;

    // Строки
    std::string x5 = "Hello";
    std::string x6 = "World";

    // Преобразование типов int в double (без потери данных)
    int x7 = 7;
    double x8 = (double)x7;
    std::cout << x8 << std::endl;

    // Преобразование типов double в int (с потерей данных после запятой)
    double x9 = 9.876;
    int x10 = (int)x9;
    std::cout << x10 << std::endl;

    std::cin >> x1;
    return 0;
}
