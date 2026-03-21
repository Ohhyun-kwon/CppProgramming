// **********************************************
// 제 목 : 문제4
// 날 짜 : 2026년 3월11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
int main(void) {
	char text[100];

	cout << "빈칸없이 문자열 입력 : ";
	cin >> text;

	for (int i = 0; text[i] != '\0'; i++) {
		cout << text[i] << " ";
	}
	return 0;
}
