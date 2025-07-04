#include <iostream>
using namespace std;

class Point {
public:
	int x, y;

	Point(int x, int y) : x(x), y(y) {}

	void print() {
		cout << "x = " << x << ", y = " << y << endl;
	}

	//객체 더하기 연산자 오버로딩(중복)
	Point operator+(Point& p) {
		return Point(x + p.x, y + p.y);
	}

	Point operator-(Point& p) {
		return Point(x - p.x, y - p.y);
	}
};

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);

	p1.print();
	p2.print();

	Point p3 = p1 + p2;
	p3.print();

	Point p4 = p1 - p2;
	p4.print();

	return 0;
}