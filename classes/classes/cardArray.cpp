#include <iostream>
#include <string>	//getline()
using namespace std;

//ī���ȣ �ڵ� �߱�
class Card {
private:
	static int serialNum;  //�ø���ѹ� - ���ع�ȣ
	string name;	//�� �̸�
	int cardNumber;	//ī�� ��ȣ	

public:	
	/*
	Card(){
		serialNum++;  //1����
		cardNumber = serialNum;
	} //�⺻ ������
	*/

	//������
	/*
	Card(string name) {
		serialNum++;  //1 ����
		cardNumber = serialNum;
		this->name = name;
	}
	*/

	//������ �ʱ�ȭ ���(�⺻������ ����)
	Card(string name = "") : name(name), cardNumber(++serialNum) {}

	//������
	void setName(string name) {
		this->name = name;
	}

	//������
	string getName() { return name; }
	int getCardNumber() { return cardNumber; }
};

//���� ����
int Card::serialNum = 1000;	//���� ����

int main()
{
	//��ü �迭�� ī�� �ڵ� �߱�
	const int SIZE = 3;
	Card cards[SIZE];	//�⺻ ������ �迭 ����

	/*
	Card cards[SIZE] = {
		Card("������"),
		Card("������"),
		Card("�����")
	};
	*/

	//����� �Է�
	for (int i = 0; i < SIZE; i++) {
		string name;
		cout << i + 1 << "��° ���̸� �Է�: ";
		//cin >> name;
		getline(cin, name); //���� ���� ���� ���
		cards[i].setName(name);
		
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "�� �̸�: " << cards[i].getName() <<
			", ī�� ��ȣ: " << cards[i].getCardNumber() << endl;
	}



	return 0;
}