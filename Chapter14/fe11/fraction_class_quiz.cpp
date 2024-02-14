#include <iostream>
#include <cassert>

class Fraction
{
    public:

        Fraction() = default;
    
        explicit Fraction(int numerator, int denominator)
        : m_numerator { numerator }, m_denominator { denominator }
        {
            assert(denominator != 0 && "Denominator cannot equal zero!");
        }

        int numerator() const { return m_numerator; }
        int denominator() const { return m_denominator; }

        void print() const
        {
            std::string_view divLine { "-" }; 

            if (m_numerator > 9 || m_denominator > 9)
                divLine = "--";

            std::cout << m_numerator << '\n';
            std::cout << divLine << '\n';
            std::cout << m_denominator << '\n';

        }

    private:
        int m_numerator { 0 };
        int m_denominator{ 1 };

};


Fraction multiply(const Fraction& thing, const Fraction& other)
        {
            return Fraction { thing.numerator() * other.numerator(),
                thing.denominator() * other.denominator() };
        }


Fraction getFraction()
{
    int userInputNumer { };
    int userInputDenom { };

    std::cout << "Enter a value for numerator: ";
    std::cin >> userInputNumer;
    std::cout << "Enter a value for denominator: ";
    std::cin >> userInputDenom;
    std::cout << '\n';

    return Fraction { userInputNumer, userInputDenom };
}


int main()
{
    Fraction f1{ getFraction() };
    Fraction f2{ getFraction() };

    std::cout << "Your fractions multiplied together: \n\n";

    multiply(f1, f2).print();

    return 0;
}

