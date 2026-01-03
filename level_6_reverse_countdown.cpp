// Level 6:
// Reverse countdown

#include<iostream>
#include<string>
// WindowsAPI
#include<Windows.h>
// Временные задержки и треды
#include<thread>
#include<chrono>

void delay(int ms) {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
 
void foo() {
	int counter = 5;
	while (counter > 0) {
		std::cout << counter << std::endl;
		delay(1000);
		counter--;
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


