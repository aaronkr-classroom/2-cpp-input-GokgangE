#include <iostream>

int main() {
	//사용자의 이름을 물어보기
	std::cout << "What's your name? >>> ";
	
	//사용자의 이름을 읽기
	std::string name;
	std::cin >> name;

	//인사하기
	std::cout << "Hello," << name << "!" << std::endl;



	return 0;
}