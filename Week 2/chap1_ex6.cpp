// chap1_ex6.cpp
#include<iostream>
int main() {
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;
	
	std::cout << "Hello," << name
		<< std::endl << "And how about you? >>> ";
	std::cin >> name;

	std::cout << "Nice to meet you, " << name << "!" << std::endl;

	return 0;
}