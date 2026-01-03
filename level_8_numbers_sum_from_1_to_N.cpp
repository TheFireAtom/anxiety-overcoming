// Level 8:
// Numbers sum from 1 to N

#include<iostream>
#include<string>
// WindowsAPI
#include<Windows.h>
// Временные задержки и треды
#include<thread>
#include<chrono>
 
void foo() {
	int lastNum;
	int result;
	std::cout << "Введите поседнее число в промежутке: ";
	std::cin >> lastNum;
	for (int i = 1; i <= lastNum; i++) {
		result += i;
	}
	std::cout << "Сумма чисел равна: " << result;
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

