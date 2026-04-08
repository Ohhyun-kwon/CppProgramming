// **********************************************
// 제 목 : 문제4
// 날 짜 : 2026년 4월8일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Sphere {
	int radius;
public:
	Sphere() : radius(1) {}
	~Sphere() {}
	void setRadius(int r) { radius = r; }
	double getArea() { return (4.0 / 3.0) * 3.14 * radius * radius * radius; }
};
	
int main() {
	cout << "생성하고자 하는 구의 개수 : ";
	int n, r;
	cin >> n; 
	Sphere* pArray = new Sphere[n]; 
	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << "의 반지름 : "; 
		cin >> r;
		pArray[i].setRadius(r);
	}
	for (int i = 0; i < n; i++) {
		cout << "구" << i + 1 << "의 부피 : " << pArray[i].getArea() << endl;
	}
	delete[] pArray;
	return 0;
}
