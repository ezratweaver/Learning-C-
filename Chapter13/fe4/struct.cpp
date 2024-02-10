#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double hourly {};
};


void giveEmployeeRaise(Employee& employee, double percentage)
{
   if (percentage < 1.0) 
        ++percentage;

    employee = {
        employee.id,
        employee.age,
        employee.hourly * percentage
                };
}


int main()
{
    Employee ezra { .id = 1, .age = 18, .hourly = 32.00 };

    giveEmployeeRaise(ezra, 0.10);

    std::cout << ezra.hourly << '\n';

    return 0;
}
