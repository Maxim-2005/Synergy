//С помощью функций rand() и srand() создайте ГПСЧ, который выводит количество очков, 
//полученных при бросании двух игральных кубиков.
//Не забудьте учесть теорию вероятностей. Выведите не менее 100 исходов.

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << (rand() % 6 + 1)+ (rand() % 6 + 1) << " ";
        cout << endl;
    }

    return 0;
}