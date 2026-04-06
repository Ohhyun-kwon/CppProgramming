// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 4월6일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
int main(void) {
	int count;
	int total = 0;
	cout << "입력할 정수의 개수를 입력하세요 : ";
	cin >> count;

	cout << count << "개의 정수를 입력하시오." << endl;
	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	delete[] arr;
	cout << "평균값은 " << total / count << "입니다.";
	return 0;
}
