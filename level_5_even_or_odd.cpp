// Level 5: 
// Even or odd number

#include<iostream>
#include<string>
#include<Windows.h>
 
void foo() {
	int number;
	std::cout << "Введите число: ";
	std::cin >> number;
	if (number % 2 == 0) {
		std::cout << "Число чётное" << std::endl;
	} else {
		std::cout << "Число нечётное" << std::endl;
	}
}

int main() {
	// Включаем UTF-8 (для русского языка)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
	foo();

	return 0;
}

// Completed!!!

// Congrads!!!

