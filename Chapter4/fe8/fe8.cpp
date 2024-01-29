#include <iostream>


double calculateUserInput(double number1, double number2, char operand)
{
    if (operand == '*')
        return number1 * number2;
    if (operand == '/')
        return number1 * number2;
    if (operand == '+')
        return number1 + number2;
    if (operand == '-')
        return number1 - number2;
    return 0;
}


double getUserInput()
{
    std::cout << "Enter an decimal value: ";
    double userInput{ };
    std::cin >> userInput;
    return userInput;
}


char getUserOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char userInput{ };
    std::cin >> userInput;
    return userInput;
}


int main()
{
    double x = getUserInput();
    double y = getUserInput();
    char oper = getUserOperator();
    double output = calculateUserInput(x, y, oper);
    std::cout << x << " " << oper << " " << y << " is " << output << std::endl;


    return 0;
}
