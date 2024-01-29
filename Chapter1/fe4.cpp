#include <iostream>

int main()
{
	int userAnswer{ };
	std::cout << "Enter an integer: ";	
	std::cin >> userAnswer;
	std::cout << "Double that number is: " << userAnswer * 2 << "\n";
	std::cout << "Triple that number is: " << userAnswer * 3 << "\n";

}
