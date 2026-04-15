// **********************************************
// 제 목 : p209 문제4
// 날 짜 : 2026년 4월15일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>
#include <string>

using namespace std;
int main(void) {
	string text;
	string ntext;
	cout << "텍스트 입력(한글 안 됨)>>";
	getline(cin, text, '\n');

	for (int i = 0; i < text.length(); i++) {
		if (isalpha(text[i]) || text[i] == ' ') {
			ntext += text[i];
		}
	}
	cout << ntext;
	return 0;
}
