// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 4월6일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
int main(void) {
	int count;
	cout << "입력할 실수의 개수를 입력하세요 : ";
	cin >> count;

	cout << count << "개의 실수를 입력하시오." << endl;
	double* arr = new double[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}
	double max = arr[0];
	for (int i = 1; i < count; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	delete[] arr;
	cout << "최대값은 " << max << "입니다.";
	return 0;
}
