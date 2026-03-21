// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 3월11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
int main(void) {
	int number;
	char name[100];
	char address[100];

	cout << "학번을 입력하시오 : ";
	cin >> number;

	cin.ignore();

	cout << "이름을 입력하시오 : ";
	cin.getline(name, 100);

	cout << "주소를 입력하시오 : ";
	cin.getline(address, 100);

	cout << "1.학번 :" << number << endl;
	cout << "2.이름 :" << name << endl;
	cout << "3.주소 :" << address << endl;
	return 0;
}
