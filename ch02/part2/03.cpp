// **********************************************
// 제 목 : 문제3
// 날 짜 : 2026년 3월11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
int main(void) {
	double number;
	double total = 0;

	cout << "실수 5개를 입력하세요 : ";

	for (int i = 0; i < 5; i++) {
		cin >> number;
		if (number > 0) {
			total += number;
		}
	}
	cout << "양수의 합은 " << total << "입니다.";
	return 0;
}
