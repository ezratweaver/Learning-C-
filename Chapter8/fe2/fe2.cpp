#include <iostream>

int calculate(int x, int y, char op)
{
    switch(op)
    {
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '%':
            return x % y;
        default:
            std::cout << "Invalid operator" << '\n';
            return 1;
    }
}

int main()
{
    std::cout << "Please enter a number: ";
    int x { };
    std::cin >> x;

    std::cout << "Please enter a second number: ";
    int y { };
    std::cin >> y;

    std::cout << "Please enter an operator: ";
    char op { };
    std::cin >> op;

    std::cout << "Output: " << calculate(x, y, op) << '\n';

}
