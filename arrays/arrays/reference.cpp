#include <iostream>
using namespace std;

/*
	������ - ���۷���(������ ������ ������ ���̴� ���)
	<�ڷ���& ����������>
*/
int main()
{
	int n = 1;
	int& x = n;
	int& y = n;

	cout << "x = " << x << ", y = " << y << endl; //1

	x = 3;
	cout << "x = " << x << ", y = " << y << endl; //3


	return 0;
}