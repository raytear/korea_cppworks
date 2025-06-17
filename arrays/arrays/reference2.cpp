#include <iostream>
using namespace std;

/*
	������ - ���۷���(������ ������ ������ ���̴� ���)
	<�ڷ���& ����������>
	- ������ó�� �ּҸ� ����Ŵ
*/

void swapVal(int, int);
void swapRef(int&, int&);
void swapRef2(int* a, int* b);
int main()
{
	//������ ��ȯ
	int x = 10, y = 20;

	cout << "���� ���� ȣ��\n";
	swapVal(x, y);
	cout << "x = " << x << ", y = " << y << endl;


	cout << "������ ���� ȣ��\n";
	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "������(�ּ�)�� ���� ȣ��\n";
	swapRef2(&x, &y);
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}

void swapVal(int a, int b) {
	int temp; //��������
	temp = a;
	a = b;
	b = temp;
}

//������ ��ȯ �Լ�
void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//������ ��ȯ �Լ�
void swapRef2(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}