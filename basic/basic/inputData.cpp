#include <iostream>
#include <string> //getline() 함수 사용
using namespace std;
/*
	입력 처리
	cin >> 변수
	cin 스트림으로 읽어온 데이터를 저장할 변수 지정
*/

int main()
{
	string address; //주소를 저장할 변수 선언


	cout << "주소를 입력하세요: ";
	//cin >> address;

	//공백문자를 포함한 문자열 처리
	getline(cin, address);
	cout << address << endl;

	return 0;
}