// Пользователь вводит в консоль своё имя. Записать в файл строку, 
// приветствующую пользователя по имени, затем считать эту строку 
// из файла и вывести её в консоль.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    ofstream file;
    string name;
    file.open("Hello.txt");
    if (file.is_open())
    {
        cout << "Your name: " << endl;
        cin >> name;
        name = "Hi, ", name;
    }
    else
        cout << "Error";
    file.close();
}
