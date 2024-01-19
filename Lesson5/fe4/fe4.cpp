#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::getline, std::ws;

int main()
{
    cout << "Enter your full name: ";
    string userName{ };
    getline(cin >> ws, userName);
    cout << "Enter your age: ";
    int userAge{ };
    cin >> userAge;
    
    int combinedAgeNameLength{ userAge + static_cast<signed int>(userName.length()) };

    cout << "Your age + length of your name is: " << combinedAgeNameLength << "\n";

    return 0;
}

