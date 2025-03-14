//frame.cpp
#include<iostream>

int main() {
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;
	
	// **************	greeting길이 +4*
	// *			*	greeting길이 +2 공백
	// *Hello, name!*   greeting길이 +2 공백
	// *			*	greeting길이 +3 공백
	// **************	greeting길이 +4*

	//인사 문자열 만들기
	const std::string greeting = "Hello, " + name + "!";

	//2번째, 4번째 줄을 만들기
	const std::string spaces(greeting.size(), ' '); //null 문자열
	const std::string line24 = "* " + spaces + " *";
	
	//1번째, 5번째 줄을 만들기
	const std::string line15(line24.size(), '*');

	//인사 상자 출력
	std::cout << std::endl;
	std::cout << line15 << std::endl;
	std::cout << line24 << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << line24 << std::endl;
	std::cout << line15 << std::endl;

	return 0;
}