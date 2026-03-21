// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월18일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
public:
    double width, height;
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
