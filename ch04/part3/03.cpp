// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 4월8일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Triangle {
private:
	int width, height;
public:
	Triangle() : Triangle(1, 1) {}
	Triangle(int w, int h) : width(w), height(h) { cout << "밑변" << width << ",높이" << height << "인 삼각형 생성" << endl; }
	~Triangle() { cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl; }
	double getArea() { return 0.5 * width * height; }
};

int main() {

	Triangle* pArray = new Triangle[3]{ Triangle(), Triangle(2,2), Triangle(4,4) };

	for (int i = 0; i < 3; i++) {
		cout << "삼각형의 면적은 " << pArray[i].getArea() << endl;
	}
	delete[] pArray;


	return 0;
}
