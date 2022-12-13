﻿//Создать структуру, которая хранит имя человека и его номер телефона. Создать очередь из 5-ти структур и вывести результат.
//Помним, что в очереди кто первым записался, тот первым и обслуживается.

#include <iostream>
#include <queue>
using namespace std;

//Создаем стуктуру
struct human {
    string name;
    string phone;
};

int main()
{
    setlocale(LC_ALL, "RUS");

    //Создаем и заполняем очередь
    queue<human> que;
    que.push({ "Вася", "+7(111)111-11-11" });
    que.push({ "Петя", "+7(222)222-22-22" });
    que.push({ "Коля", "+7(333)333-33-33" });
    que.push({ "Маша", "+7(444)444-44-44" });
    que.push({ "Нюша", "+7(555)555-55-55" });

    //Выводим очередь с удалением, т.к. обслуживается всегда первый, выведется весь список.
    while (que.size())
    {
        cout << que.front().name << ", " << que.front().phone << endl;
        que.pop();
    }
}

//Если смысл задания реализовать структуру данных типа "очередь" самостоятельно, при помощи указателей, то я переделаю.