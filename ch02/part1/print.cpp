// **********************************************
// 제 목 : 문자열, * 출력 프로그램
// 날 짜 : 2026년 3월11일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

int main(void)
{
    std::cout << "이름: 홍길동\n";
    std::cout << "주소: 군산시 대학로 558\n";
    std::cout << "학번: 201012\n";
    std::cout << "차종: 벤츠\n";
    return 0;
}

int main(void) {
    std::cout << "군산대학교 \"홍길동\"\n";
    std::cout << "\"축하합니다.\"\n";
    std::cout << "100% \\취업율\\\n";
	return 0;
}

int main(void) {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == j || i + j == 6) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}

using namespace std;
int main(void) {
    for (int n = 0; n < 4; n++) {
        for (int m = 0; m <= n; m++) {
            cout << "*";
        }
        cout << "\n";
    }
	return 0;
}
