#include <iostream>
#include <limits>

int main(){
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "This is a test text, not its not\n";
	std::cin.get();	
	return 0;
}
