// Level 10:
// Fibonacci sequence

#include<iostream>
#include<string>
// WindowsAPI
#include<Windows.h>
// Временные задержки и треды
#include<thread>
#include<chrono>
 
void fibonacci () {

	int N;
	int first = 0;
	int next = 1;
	std::cout << "Enter your final fibonacci number: ";
	std::cin >> N;

	if (N == 0) {
		std::cout << "0" << std::endl;
	} else {
		while (next != N) {
			std::cout << first + next << std::endl;

			int temp = first;
			first = next;
			next = temp + next;
		}
	}
}

// N = 5

//		   0
// 0 + 1 = 1
// 1 + 1 = 2
// 1 + 2 = 3
// 2 + 3 = 5



int main() {
	// Включаем UTF-8 (для русского языка)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
	fibonacci();

	return 0;
}

// Completed!!!

// Congrads!!!

