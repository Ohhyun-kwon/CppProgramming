// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 3월 11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>
#include <string>

using namespace std;
int main(void) {
	int x;
	int y = 0;

	cout << "정수 x를 입력하시오 : ";
	cin >> x;
	y = (x * x) + (x * 2) - 5;
	cout << "x = " << x << "일때 y의 값은 " << y << "입니다.";
	return 0;
} 
