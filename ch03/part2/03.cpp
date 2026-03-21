// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 3월18일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Rectangle {
public:
    struct Cood {
        int x, y;
    };
    int x, y;
    int width, height;
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int width, int height);
    int getPerimeter();
    int getArea();
    Cood getCoordinate();
};

Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
Rectangle::Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

Rectangle::Cood Rectangle::getCoordinate() {
    Cood coo;
    coo.x = x + width;
    coo.y = y - height;
    return coo;
}

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);

    cout << "rect1의 면적은 " << rect1.getArea() << endl;

    cout << "rect2의 둘레는 " << rect2.getPerimeter() << endl;

    Rectangle::Cood coo = rect3.getCoordinate();
    cout << "rect3의 우측하단의 좌표는 (" << coo.x << ", " << coo.y << ")";
    return 0;
}
