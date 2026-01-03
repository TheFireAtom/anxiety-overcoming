// Level 3:
// Simple calculator

#include<iostream>
#include<format> // Required for std::format
#include<string>

int calc(int a, int b) {
	return a + b;
}

int main() {
	int a;
	int b;

	std::cout << "Write a and b to sum them: " << std::endl;
	std::cin >> a;
	std::cin >> b;

	std::cout << std::format("Result: {}", calc(a, b));

	return 0;
}

// Completed!!!

// Congrads!!!