#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "저장할 문자열의 크기를 입력하세요 : ";
    cin >> count;

    char* str = new char[count + 1];
    cout << "문자열을 입력하시오 : ";
    cin.ignore();
    cin.getline(str, count + 1);
    cout << "입력한 문자열은 " << str << "입니다.\n";
    delete[] str;
    return 0;
}
