// **********************************************
// 제 목 : 문제풀이
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


using namespace std;

int main(void) {
	char text[100];

	while (true) {
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능) : ";
		cin.getline(text, 100);

		if (strcmp(text, "exit") == 0) {
			break;
		}

		int count = 0;
		bool firsttext = false;

		for (int i = 0; text[i] != '\0'; i++) {
			if (text[i] != ' ' && !firsttext) {
				count++;
				firsttext = true;
			}
			else if (text[i] == ' ') {
				firsttext = false;
			}
		}
		cout << "단어의 개수는 " << count << "개이다." << endl;
	}

	return 0;
}
