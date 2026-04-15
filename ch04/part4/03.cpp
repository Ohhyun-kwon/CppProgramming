// **********************************************
// 제 목 : p209 문제2
// 날 짜 : 2026년 4월15일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>
#include <string>

using namespace std;
int main(void) {
	int count;
	cout << "구입할 물품의 개수>>";
	cin >> count;

	int *price_arr = new int[count];
	cout << "물품 " << count << "개의 가격 입력>>";
	for (int i = 0; i < count; i++) {
		cin >> price_arr[i];
	}

	int min = price_arr[0];
	int max = price_arr[0];

	for (int i = 1; i < count; i++) {
		if (price_arr[i] < min) min = price_arr[i];
		if (price_arr[i] > max) max = price_arr[i];
	}

	cout << "제일 싼 가격은 " << min << endl;
	cout << "제일 비싼 가격은 " << max;

	return 0;
}
