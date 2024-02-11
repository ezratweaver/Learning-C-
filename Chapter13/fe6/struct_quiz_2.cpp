#include <iostream>
#include <string_view>

struct Fraction
{
    int numerator {};
    int denominator { 1 };
};


Fraction getUserFraction()
{

    std::cout << '\n';

    int numerator;
    int denominator;

    std::cout << "Enter Numerator: ";
    std::cin >> numerator;

    std::cout << "Enter Denominator: ";
    std::cin >> denominator;

    std::cout << '\n';

    return {numerator, denominator};
}


Fraction multiplyFraction(Fraction& fraction1, Fraction& fraction2)
{
    return {fraction1.numerator * fraction2.numerator,
            fraction1.denominator * fraction2.denominator};
}


void printFraction(Fraction& fraction)
{
    std::string_view divLine { "-" }; 

    if (fraction.numerator > 9 || fraction.denominator > 9)
        divLine = "--";

    std::cout << fraction.numerator << '\n';
    std::cout << divLine << '\n';
    std::cout << fraction.denominator << '\n';
}


int main()
{
    
    Fraction userFraction1 { getUserFraction() };
    Fraction userFraction2 { getUserFraction() };

    Fraction answerFrac { multiplyFraction(userFraction1, userFraction2) };

    printFraction( answerFrac );
}
