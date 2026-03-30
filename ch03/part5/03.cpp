// **********************************************
// 제 목 : 문제3 (p.150 5번)
// 날 짜 : 2026년 3월30일
// 작성자 : 2500008 권오현
// **********************************************

#include <iostream>

using namespace std;
class CoffeeMachine {
private:
	int coffee, water, sugar;
public:		    
	CoffeeMachine() : CoffeeMachine(0, 0, 0) {}
	CoffeeMachine(int c, int w, int s) : coffee(c), water(w), sugar(s) {}
	void show();
	void fill() { coffee = 10; sugar = 10; water = 10; }
	void drinkEspresso() {
		if (coffee - 1 > 0 && water - 1 > 0) { coffee -= 1; water -= 1; }
		else { cout << "재료 부족" << endl; } }
	void drinkAmericano() {
		if (coffee - 1 > 0 && water - 2 > 0) { coffee -= 1; water -= 2; }
		else { cout << "재료 부족" << endl; }
	}
	void drinkSugarCoffee() {
		if (coffee - 1 > 0 && water - 2 > 0 && sugar - 1 > 0) { coffee -= 1; water -= 2; sugar -= 1; }
		else { cout << "재료 부족" << endl; }
	}
};

void CoffeeMachine::show() {
	cout << "[머신 상태] 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

int main(void) {
	CoffeeMachine java(5, 10, 6);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	return 0;
}
