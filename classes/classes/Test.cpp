#include <iostream>
using namespace std;

/*
	**C++�� ��� ���
	�迭(array) - ����(�Ѱ���) ������ �������� �ڷḦ �����ϴ� �ڷ���
	����ü(struct) - �������� �ڷ����� ���� ���� �ڷ���
	Ŭ����(class) - �������� �ڷ����� ����(�Ӽ�), �������� �Լ�(���)�� ������ �ڷ���
*/
//Dog Ŭ���� ����
class Dog {
	//��� ����
public: //�ܺο��� ���� ����
	string type;	//����
	int age;		//����

	//��� �Լ�
	void bark() {
		cout << "��~ ��~";
	}
};

int main()
{
	//Ŭ���� ��� - �ν��Ͻ�(��ü) ����
	Dog dog1;

	//����� ���ٽÿ� ��(.) ������ ���
	dog1.type = "������";
	dog1.age = 3;

	cout << "������ ����: " << dog1.type << endl;
	cout << "������ ����: " << dog1.age << endl;
	dog1.bark();

	return 0;
}