#include <iostream>
using namespace std;

/*
	������ - �ַ� ��� ���迡�� ��Ÿ���� Ư��
	- �θ� Ŭ���������� �ν��Ͻ� ����(�θ� > �ڽ�) : �ڵ� ����ȯ
	- �ڽ� Ŭ������ �ν��Ͻ� ����
	- new, delete ���
*/

class Animal {
public:
	//Animal(){}
	//�ݵ�� �Ҹ��� ����ؾ� ��
	//delete ������ ���� �ʾ� �޸� ���� ���� �߻���
	virtual ~Animal() {}

	void breathe() {
		cout << "������ ���� ���ϴ�.\n";
	}

	//����(�߻�)���� ����
	//virtual void cry() {} //��ӹ޴� �ʿ��� �ݵ�� �����ؾ� ��
	virtual void cry() = 0; 
};

class Cat : public Animal {
	void cry() {
		cout << "��~ ��!\n";
	}
};

class Dog : public Animal {
	void cry() {
		cout << "��~ ��~\n";
	}
};

int main()
{
	//new ��� - �޸�(heap)
	/*Cat* cat = new Cat;
	cat->breathe();*/

	//�θ� Ŭ���� ������ �ν��Ͻ� ����
	Animal* cat = new Cat;
	cat->breathe();
	cat->cry();

	delete cat;

	Animal* dog = new Dog;
	dog->breathe();
	dog->cry();

	delete dog;

	return 0;
}