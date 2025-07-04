#include <iostream>
using namespace std;

//ĳ���� Ŭ���� ����
class Character {
public:
	Character() {
		cout << "Character Ŭ���� ������" << endl;
	}
	~Character() {
		cout << "Character Ŭ���� �Ҹ���" << endl;
	}
	
};

//���� Ŭ���� ����
class Monster {
public:
	Monster() {
		cout << "Monster Ŭ���� ������" << endl;
	}
	~Monster() {
		cout << "Monster Ŭ���� �Ҹ���" << endl;
	}
};

//MonsterA Ŭ���� ����
class MonsterA : public Monster, Character {
private:
	int location[2];	//��ǥ ���� �迭

public:
	//�⺻ ������
	MonsterA() : MonsterA(0, 0) {
		cout << "MonsterA Ŭ���� ������" << endl;
	}

	//�Ű����� �ִ� ������
	MonsterA(int x, int y) : location{ x, y } {
		cout << "MonsterA Ŭ���� ������(�Ű����� �߰�)" << endl;
	}
	
	//��ġ ��� �޼���
	void showLocation() {
		cout << "��ġ(" << location[0] << ", " << location[1] << ")\n";
	}
};

int main()
{
	//�⺻�����ڷ� �ν��Ͻ� ����
	MonsterA forestMonster;
	forestMonster.showLocation();
	cout << "---------------------\n";

	//�Ű����� �ִ� ������ �ν��Ͻ� ����
	MonsterA woodMonster(10, 20);
	woodMonster.showLocation();


	return 0;
}