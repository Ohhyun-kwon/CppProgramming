// **********************************************
// 제 목 : 문제4 (p.153 10번)
// 날 짜 : 2026년 3월30일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Pipe {
    int data[10];
    int index;
public:
    Pipe();
    int arrive(int n);
    int shift();
    void show();
};

Pipe::Pipe() {
    for (int i = 0; i < 10; i++)
        data[i] = 0;
    index = 0;
}

int Pipe::arrive(int n) {
    if (index == 10) {
        int front = data[0];
        for (int i = 0; i < 9; i++)
            data[i] = data[i + 1];
        data[9] = n;
        return front;
    }
    else {
        data[index] = n;
        index++;
        return -1;
    }
}

int Pipe::shift() {
    int front = data[0];
    for (int i = 0; i < 9; i++)
        data[i] = data[i + 1];
    data[9] = 0;
    return front;
}

void Pipe::show() {
    cout << "파이프 내부 [";
    for (int i = 0; i < 10; i++) {
        cout << data[i];
        if (i < 9) cout << " ";
    }
    cout << "]" << endl;
}

int main() {
    Pipe pipe;
    for (int i = 0; i < 6; i++) pipe.arrive(i);
    pipe.show();
    for (int i = 6; i < 12; i++) pipe.arrive(i);
    pipe.show();
    int front = pipe.shift();
    cout << "shift()로 제거된 맨 앞 데이터 : " << front << endl;
    pipe.show();
    front = pipe.arrive(50);
    cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << endl;
    pipe.show();
    return 0;
} 
