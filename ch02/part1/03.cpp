

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
