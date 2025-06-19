#include <iostream>
using namespace std;

class Member {
private:
	string id;
	string password;

public:
	Member(string id, string password);
	void displayInfo();
};

Member::Member(string id, string password) {
	this->id = id;
	this->password = password;

}

void Member::displayInfo() {
	cout << "���̵�: " << this->id << ", "
		 << "�н�����: " << this->password << endl;
}

int main()
{
	Member members[3] = {
		Member("flower", "f1234"),
		Member("tree", "t1234"),
		Member("bird", "b1234")
	};

	cout << "********** ȸ�� ��Ȳ **********" << endl;
	for (int i = 0; i < size(members); i++) {
		members[i].displayInfo();
	}

	return 0;
}