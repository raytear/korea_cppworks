#include <iostream>
using namespace std;

//struct�� ��� ������ public ���� �Ӽ��� ����
struct Student {
	string name;	//�̸�
	int grade;		//�г�
	string address; //�ּ�
};

void print(Student st) {
	cout << "�̸�: " << st.name << endl;
	cout << "�г�: " << st.grade << endl;
	cout << "�ּ�: " << st.address << endl;
}

//�л��� ���� ���

int main()
{
	Student st1;

	//��� ������ ���� ������
	st1.name = "�̿���";
	st1.grade = 3;
	st1.address = "����� ����� ��赿";

	print(st1); //�Ű����� ��ü(�ν��Ͻ�) ����

	return 0;
}