#include <iostream>

class BankAccount
{


public:

    void print() const
    {
        std::cout << "Balance: " << m_balance << " Id: " << m_id << '\n';
    }

private:

    long long m_balance { 99999 };
    int m_id { 1 };

};


int main()
{
    BankAccount ezraAccount { };

    ezraAccount.print();


    return 0;
}
