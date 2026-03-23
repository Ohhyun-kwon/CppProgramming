// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 3월23일
// 작성자 : 2500008 권오현
// 질문 : 실습과제2번과 실행결과가 다른 이유를 설명하라.
// 답 : 전역객체는 main 함수 호출전에 생성되는데 이때 코드상으로 tri1, tri2 순서로 생성됨. 이후 main 함수가 호출되고 출력이 이뤄져 실행창에서의 결과에 차이가 있음.
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
public:
    int width, height;
    Triangle();
    Triangle(int w, int h);
    double getArea();
    ~Triangle();
};

Triangle::Triangle() : Triangle(1, 1) {}

Triangle::Triangle(int w, int h) : width(w), height(h) {
    cout << "밑변 " << width << " 높이 " << height << "인 삼각형 생성" << endl;
}

double Triangle::getArea() {
    return 0.5 * width * height;
}

Triangle::~Triangle() {
    cout << "밑변 " << width << " 높이 " << height << "인 삼각형 소멸" << endl;
}

Triangle tri1;
Triangle tri2(2, 4);

int main() {
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;
    return 0;
}
