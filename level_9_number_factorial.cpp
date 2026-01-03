// Level 9:
// Number factorial

#include<iostream>
#include<string>
// WindowsAPI
#include<Windows.h>
// Временные задержки и треды
#include<thread>
#include<chrono>

int nfactorial(int num) {
	static int result = 1;
	if (num == 1) {
		return result;
	} else {
		result *= num;
		nfactorial(num-1);
	}
}

void foo() {
	int wantedNum;
	std::cout << "Введите число, факториал которого вы хотите найти: ";
	std::cin >> wantedNum;
	// Поиск факториала
	std::cout << "Факториал вашего числа равен: " << nfactorial(wantedNum);
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



