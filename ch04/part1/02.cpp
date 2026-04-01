// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 4월1일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() : Triangle(1, 1) {}
	Triangle(int w) : Triangle(w, 1) {}
	Triangle(int w, int h) { this->width = w; this->height = h; }
	double getArea() { return 0.5 * this->width * this->height; }
};

int main(void) {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(10);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	Triangle tri3(10, 2);
	cout << "삼각형의 면적은 " << tri3.getArea() << endl;
	return 0;
}
