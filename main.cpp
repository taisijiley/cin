#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "������� �������� ��� ���������� � = ";
	cin >> a; // ������ ������� ��� ���������� a
	cout << "������� �������� ��� ���������� b = ";
	cin >> b; // ������ �������� ��� ���������� b
	// ��� �� ��������� �� 
	cout << "���������� � =  " << a + b << endl;
}