#include <iostream>
using namespace std;

/*
	다형성 - 주로 상속 관계에서 나타나는 특성
	- 부모 클래스형으로 인스턴스 생성(부모 > 자식) : 자동 형변환
	- 자신 클래스로 인스턴스 생성
	- new, delete 사용
*/

class Animal {
public:
	//Animal(){}
	//반드시 소멸자 명시해야 함
	//delete 해제가 되지 않아 메모리 누수 현상 발생함
	virtual ~Animal() {}

	void breathe() {
		cout << "동물은 숨을 쉽니다.\n";
	}

	//가상(추상)으로 정의
	//virtual void cry() {} //상속받는 쪽에서 반드시 구현해야 함
	virtual void cry() = 0; 
};

class Cat : public Animal {
	void cry() {
		cout << "야~ 옹!\n";
	}
};

class Dog : public Animal {
	void cry() {
		cout << "왈~ 왈~\n";
	}
};

int main()
{
	//new 사용 - 메모리(heap)
	/*Cat* cat = new Cat;
	cat->breathe();*/

	//부모 클래스 형으로 인스턴스 생성
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