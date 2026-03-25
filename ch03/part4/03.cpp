// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 3월25일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle(int w, int h);
	~Triangle();
	void setWidth(int w);
	void setHeight(int h);
	int getWidth();
	int getHeight();
};

Triangle::Triangle(int w, int h) {
	if (w < 0 || h < 0) {
		cout << "길이는 양수여야함, 대신에 ";
		w = 1;
		h = 1;
	}
	width = w;
	height = h;
	cout << "폭" << width << ",높이" << height << " 삼각형 생성" << endl;
}

Triangle::~Triangle() {
	cout << "폭" << width << ",높이" << height << " 삼각형 소멸" << endl;
}

void Triangle::setWidth(int w) { 
	if (w < 0) {
		cout << "폭은 양수이어야 함" << endl;
	}
	else {
		width = w;
	}
}

void Triangle::setHeight(int h) { 
	if (h < 0) {
		cout << "높이는 양수이어야 함" << endl;
	}
	else {
		height = h;
	}
}

int Triangle::getWidth() { return width; }

int Triangle::getHeight() { return height; }

int main() {
	Triangle tri(-10, -5);
	tri.setWidth(-3);
	tri.setHeight(-5);
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	return 0;
}
