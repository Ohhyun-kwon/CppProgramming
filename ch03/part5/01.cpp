// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월30일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() : Triangle(1, 1) {}
	Triangle(int w, int h) : width(w), height(h) { cout << "폭" << width << ",높이" << height << "인 삼각형 생성" << endl; }
	~Triangle() { cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
	double getArea() { return 0.5 * width * height; }
};

int main(void) {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}
