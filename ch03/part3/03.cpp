// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 3월23일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Sphere {
public:
    int radius;
    Sphere();
    Sphere(int r);
    double getVolume();
    ~Sphere();
};

Sphere::Sphere() : Sphere(1) {}

Sphere::Sphere(int r) : radius(r) {
    cout << "반지름 " << radius << "인 구 생성" << endl;
}

double Sphere::getVolume() {
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

Sphere::~Sphere() {
    cout << "반지름 " << radius << "인 구 소멸" << endl;
}

int main() {
    Sphere sph1; 
    cout << "구의 부피는 " << sph1.getVolume() << endl;

    Sphere sph2(3);
    cout << "구의 부피는 " << sph2.getVolume () << endl;
    return 0;
}
