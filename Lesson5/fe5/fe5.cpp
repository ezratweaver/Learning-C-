#include <iostream>
#include <string>

using std::cout, std::cin, std::string, std::getline, std::ws;


int main()
{
    cout << "Enter the name of the first person: ";
    string nameOne{  };
    getline(cin >> ws, nameOne);

    cout << "Enter the age of " << nameOne << ": ";
    int ageOne{  };
    cin >> ageOne;

    cout << "Enter the name of the second person: ";
    string nameTwo{  };
    getline(cin >> ws, nameTwo);

    cout << "Enter the age of " << nameTwo << ": "; 
    int ageTwo{  };
    cin >> ageTwo;

    if (ageOne > ageTwo)
        cout << nameOne << " (age " << ageOne << ") is older than " <<
                nameTwo << " (age " << ageTwo << ").\n";
    else
        cout << nameTwo << " (age " << ageTwo << ") is older than " <<
                nameOne << " (age " << ageOne << ").\n";

    return 0;
}
