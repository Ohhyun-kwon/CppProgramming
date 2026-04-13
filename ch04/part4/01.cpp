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
