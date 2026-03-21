// **********************************************
// 제 목 : 클래스 활용 예제
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


using namespace std;
class Sphere {
public:
	double radius;
	double getArea();
	double getVolume();
};
double Sphere::getVolume() {
	return (4.0/3.0) * 3.14 * radius * radius * radius;
}
double Sphere::getArea() {
	return 4 * 3.14 * radius * radius;
}
int main() {
	Sphere cir;
	cir.radius = 3;
	cout << "구의 부피는 " << cir.getVolume() << endl;
	cout << "구의 표면적은 " << cir.getArea() << endl;
	return 0;
}

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
	cout << "사각형의 좌측상단좌표(x,y) : ";
	cin >> rect.x >> rect.y;
	cout << "사각형의 폭과 높이(width,height) : ";
	cin >> rect.width >> rect.height;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 둘레길이는 " << rect.getPerimeter() << endl;
	rect.getCoordinate();
	return 0;
}
