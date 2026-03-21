// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 3월18일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;

class Sphere {
public:
    double radius;
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
