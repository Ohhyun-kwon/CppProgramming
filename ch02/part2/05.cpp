// **********************************************
// 제 목 : 문제5
// 날 짜 : 2026년 3월11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

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
