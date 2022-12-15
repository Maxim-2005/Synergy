// Объявить произвольную строку четырьмя различными способами, вывести эти строки в консоль
#include <iostream>
using namespace std;

int main()
{
	string s1;
	string s2 = "Hello";
	string s3("world");
	string s4(5, 'a');
	string s5 = s2;

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	return 0;
}
