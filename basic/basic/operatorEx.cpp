#include <iostream>
using namespace std;

int main()
{
	//��� ������
	int bread = 20, person = 3;
	int share, remainder;

	share = bread / person;		//��
	remainder = bread % person; //������

	cout << "��: " << share << endl;			//6
	cout << "������: " << remainder << endl; //2

	//�� ������ - &&, ||, !
	int a = 3, b = 4, c = 5;
	int res1, res2, res3;

	res1 = (a < b) && (b == c); //true(1) && false(0) �� false(0)
	res2 = (a < b) || (b == c); //true(1) && false(0) �� true(1)
	res3 = !(b > c); //!0 = 1

	cout << res1 << ", " << res2 << ", " << res3 << endl;

	return 0;
}