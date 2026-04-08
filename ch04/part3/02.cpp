// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 4월8일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1; cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r; cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	Circle* pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}
	delete[] pArray;
	return 0;
}
