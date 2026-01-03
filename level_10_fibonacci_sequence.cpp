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
	std::cout << "Enter your final fibonacci number: ";
	std::cin >> N;

	if (N == 0) {
		std::cout << "Пустая последовательность" << std::endl;
	} else {
		int first_num = 0;
		int second_num = 1;
		int result_one;
		int result_two;		
		int result_final;

		while (first_num != N || second_num != N) {

			std::cout << first_num << " ";			
			std::cout << second_num << " ";			
			
			result_one = first_num + second_num;
			result_two = result_one + second_num;

			first_num = result_one;
			second_num = result_two;
		}

// N = 5

//		   0
// 0 + 1 = 1
// 1 + 1 = 2
// 1 + 2 = 3
// 2 + 3 = 5

	}
}

int main() {
	// Включаем UTF-8 (для русского языка)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
	fibonacci();

	return 0;
}

// Completed!!!

// Congrads!!!

