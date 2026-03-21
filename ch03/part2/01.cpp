// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월18일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;

class Triangle {
    double width, height;
public:
    Triangle();
    Triangle(double width, double height);
    double getArea();
};

Triangle::Triangle() : Triangle(1, 1) {}  

Triangle::Triangle(double width, double height) : width(width), height(height) {} 

double Triangle::getArea() {
    return (1.0 / 2.0) * width * height;
}

int main() {
    Triangle tri1; 
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(2, 4);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    return 0;
}



using namespace std;

class Sphere {
    double radius;
public:
    Sphere();
    Sphere(double radius);
    double getVolume();
};

Sphere::Sphere() : Sphere(1) {}

Sphere::Sphere(double radius) : radius(radius) {}

double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

int main() {
    Sphere sph1;
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는 " << sph2.getVolume() << endl;

    return 0;
}


using namespace std;

class Rectangle {
    int x, y;           
    int width, height; 
public:
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int width, int height);
    void getPerimeter();
    void getArea();
    void getCoordinate();
};

Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
Rectangle::Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

void Rectangle::getArea() {
    cout << "면적은 " << width * height << endl;
}

void Rectangle::getPerimeter() {
    cout << "둘레길이는 " << 2 * (width + height) << endl;
}

void Rectangle::getCoordinate() {
    cout << "우측하단 좌표는 (" << x + width << ", " << y - height << ")" << endl;
}

int main() {
    Rectangle rect1;   
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);


    cout << "rect1의 ";
    rect1.getArea();

    cout << "rect2의 ";
    rect2.getPerimeter();

    cout << "rect3의 ";
    rect3.getCoordinate();

    return 0;
}
