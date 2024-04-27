#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите значение для переменной а = ";
	cin >> a; // вводим значние для переменной a
	cout << "Введите значение для переменной b b = ";
	cin >> b; // вводим значение для переменной b
	// тут мы суммируем их 
	cout << "Переменная с =  " << a + b << endl;
}
