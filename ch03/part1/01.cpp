// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월16일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
public:
	double width;
	double height;
	double getArea();
};
double Triangle::getArea() {
	return 0.5 * width * height;
}
int main() {
	Triangle tri;
	tri.width = 3;
	tri.height = 5;
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	cout << sizeof(Triangle);
	return 0;
}
