#include <iostream>

using namespace std;

int main()
{
	//������ �迭 ���� - C���
	//char season[4][10] = { "��", "����", "����", "�ܿ�" };
	//printf("%s", season[0]); //��
	//int len = sizeof(season) / sizeof(season[0]);
	//printf("%d", len);	//4

	//for (int i = 0; i < len; i++) {
	//	printf("%s\n", season[i]);
	//}

	//������ �迭 ���� - C++
	string carts[] = {"���", "��", "����", "ȭ����"};

	//�迭�� ũ��
	cout << "�迭�� ũ��: " << size(carts) << endl; //4

	//1�� ��ġ �˻�
	cout << carts[1] << endl; //��

	//2�� ��� ����
	carts[2] = "�ݶ�";

	//��ü ��� ���(�ε���)
	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << " ";
	}
	cout << endl; //�ٹٲ�

	//���� ��� for�� - for(�ڷ��� ���� : �迭 �̸�){}
	for (string cart : carts)
		cout << cart << " ";

	return 0;
}