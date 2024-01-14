#include <iostream>


int doubleNumber(int x)
{
	return x * 2;
}


int getInput()
{
	int userInput{ };
	std::cout << "Enter an integer: ";
	std::cin >> userInput;
	return userInput;
}


int main()
{
	int input{ getInput() };
	int doubledNumber{ doubleNumber(input) };
	std::cout << "That interger doubled is equal to: " << doubledNumber << "\n";
	return 0;
}
