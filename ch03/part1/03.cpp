// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 3월16일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Rectangle { 
public:
	int x;
	int y;
	int width;
	int height;
	int getArea(); 
	int getPerimeter();
	void getCoordinate();
};
int Rectangle::getArea() { 
	return width * height;
}
int Rectangle::getPerimeter() {
	return width + width + height + height;
}
void Rectangle::getCoordinate() {
	cout << "사각형의 우측하단의 좌표는 (" << x + width << "," << y - height << ")" << endl;
}
int main() {
	Rectangle rect;
	rect.x = 1;
	rect.y = 2;
	rect.width = 3;
	rect.height = 4;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
	rect.getCoordinate();
	return 0;
}
