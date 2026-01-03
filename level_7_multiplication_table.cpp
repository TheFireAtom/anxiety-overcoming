// Level 7
// Multiplication table

#include<iostream>
#include<string>
// WindowsAPI
#include<Windows.h>
// Временные задержки и треды
#include<thread>
#include<chrono>
 
void foo() {
	int userNum;
	std::cout << "Введите число для вывода таблицы умножения: ";
	std::cin >> userNum;
	for (int i = 1; i <= 10; i++) {
		std::cout << userNum * i << std::endl;
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

