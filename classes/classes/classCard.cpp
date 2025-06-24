#include <iostream>
using namespace std;

//ī���ȣ �ڵ� �߱�
class Card {
private:
	static int serialNum;  //�ø���ѹ� - ���ع�ȣ
	string name;	//�� �̸�
	int cardNumber;	//ī�� ��ȣ	
	
public:
	//������
	/*
	Card(string name) {
		serialNum++;  //1 ����
		cardNumber = serialNum;
		this->name = name;
	}
	*/
	Card(string name) : name(name), cardNumber(++serialNum) {}
	
	string getName() { return name; }
	int getCardNumber() { return cardNumber; }
};

//���� ����
int Card::serialNum = 1000;

int main()
{
	//ī�� �߱�
	Card card1("�����");
	cout << "�� �̸�: " << card1.getName() << endl;
	cout << "ī�� ��ȣ: " << card1.getCardNumber() << endl;	//1001

	Card card2("�Ӽ���");
	cout << "�� �̸�: " << card2.getName() << endl;
	cout << "ī�� ��ȣ: " << card2.getCardNumber() << endl;	//1002

	Card card3("����");
	cout << "�� �̸�: " << card3.getName() << endl;
	cout << "ī�� ��ȣ: " << card3.getCardNumber() << endl;	//1003

	return 0;
}