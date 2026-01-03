// Level 4:
// Echo chamber

#include<iostream>
#include<string>
#include<Windows.h>
 
void foo() {
	std::string str;
	std::cout << "Введите слово для эхо: ";
	std::cin >> str;
	for (int i = 0; i < 3; i++) {
		std::cout << str << " ";
	}
}

int main() {
	// Включаем UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
	foo();

	return 0;
}

// Completed!!!

// Congrads!!!

