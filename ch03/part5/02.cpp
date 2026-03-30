// **********************************************
// 제 목 : 문제2 (p.149 2번)
// 날 짜 : 2026년 3월30일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class Coffee {
private:
	int coffee, sugar, milk, water;
public:		     //커피, 설탕, 우유, 물
	Coffee() : Coffee(10, 0, 0, 0) {} 
	Coffee(int c, int s, int m, int w) : coffee(c), sugar(s), milk(m), water(w) {}
	void show();
	void print_cout(int n);
};

void Coffee::print_cout(int n) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

void Coffee::show() {
	cout << "coffee ";
	print_cout(coffee);
	cout << "sugar ";
	print_cout(sugar);
	cout << "milk ";
	print_cout(milk);
	cout << "water ";
	print_cout(water);
}

int main(void) {
	Coffee espresso; //기본 10, 0, 0, 0
	Coffee americano(5, 0, 0, 10);
	Coffee cappucchino(5, 1, 5, 2);
	Coffee mySweet(3, 7, 5, 5);

	espresso.show();
	cout << endl;
	mySweet.show();
	return 0;
}

