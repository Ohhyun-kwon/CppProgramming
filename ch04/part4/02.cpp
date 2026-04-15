// **********************************************
// 제 목 : 문제2
// 날 짜 : 2026년 4월15일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>
#include <string>

using namespace std;
int main(void) {
    int count = 0;
    string s;

    cout << "문자열 입력 : ";
    getline(cin, s);

    while (1) {
        size_t f = s.find('a');
        if (f == string::npos) break;
        s.replace(f, 1, 1, 'x');
        count++;
    }
    cout << "문자 a는 " << count << "개 있습니다.";
    return 0;
}
