// Пользователь вводит через пробел в консоль свои имя и фамилию. 
// Получить 2 отдельные строки, где одна строка хранит имя, 
// а другая фамилию. Использовать методы find() и erase().
#include <iostream>
using namespace std;

int main()
{
    string s;
    string s1;
    string s2;
    int i;

    cout << "Enter first and last name:" << endl;
    cin >> s;

    i = s.find(""); cout << i;
    s1 = s.erase(i, size(s) - 1);
    s2 = s.erase(0, i);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
