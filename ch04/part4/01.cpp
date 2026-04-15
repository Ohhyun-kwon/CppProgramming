// **********************************************
// 제 목 : 문제1
// 날 짜 : 2026년 4월15일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>
#include <string>

using namespace std;
int main(void) {	
	string s;
	string st;
	int idx = 1;
	while (1) {
		cout << "문자열 입력 : ";
		getline(cin, s, '\n');
		if (s == "quit") break;
		st += '<' + to_string(idx) + '>' + s;
		cout << "이어진 문자열 : " << st << endl;
		idx++;
	}
  return 0;
}
