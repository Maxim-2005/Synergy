//Напишите произвольный ГПСЧ, использующий функцию time().
//Cоздайте точку останова, запустите отладчик, добавьте основные переменные 
//в watch-лист и проследите за изменением их значений при выполнении программы. 
//Прикрепите 3 снимка экрана, где видно отслеживание переменных.

#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int r = rand();
    cout << r << endl;

    return 0;
}