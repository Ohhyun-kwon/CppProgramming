// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 3월16일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

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
