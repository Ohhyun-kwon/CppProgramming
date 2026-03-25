// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월25일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Circle {
private: 
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};

Circle::Circle() { radius = 1; }

void Circle::setRadius(int r) { radius = r; }

int Circle::getRadius() { return radius; }

int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
	return 0;
}
