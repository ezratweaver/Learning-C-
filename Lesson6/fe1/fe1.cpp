#include <iostream>
#include <iomanip>

int main()
{
	constexpr int apples { 12 };
	std::cout << "You have " << apples << " apples. Enter how many people to divide them between: ";
	int x {};
	std::cin >> x;

    std::cout << std::fixed << std::setprecision(2);
	std::cout << "Each person gets " << apples / static_cast<double>(x) << " whole apples.\n";

	return 0;
}
