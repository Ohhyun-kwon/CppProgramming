// **********************************************
// 제 목 : 문제4
// 날 짜 : 2026년 3월23일
// 작성자 : 2500008 권오현
// 질문 : 실습과제4번과 실행결과가 다른 이유를 설명하라.
// 답 : 전역객체는 main 함수 호출전에 생성되는데 이때 코드상으로 sph1, sph2 순서로 생성됨. 이후 main 함수가 호출되고 출력이 이뤄져 실행결과에 차이가 있음.
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

Sphere sph1;
Sphere sph2(3);

int main() {
    cout << "구의 부피는 " << sph1.getVolume() << endl;
    cout << "구의 부피는 " << sph2.getVolume() << endl;
    return 0;
}
