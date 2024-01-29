#include <iostream>

double calculateDistanceFallen(int seconds)
{
    return (9.8 * (seconds*seconds)) / 2.0;
}


int getHeightOfTower()
{
    std::cout << "Enter the height of the tower in meters: ";
    int userInput{ };
    std::cin >> userInput;
    return userInput;
}


double calculateBallHeight(int height, int seconds)
{
    return height - calculateDistanceFallen(seconds);
}


bool printBallHeight(int height, int seconds)
{
    double calc_height{ calculateBallHeight(height, seconds) };
    if (calc_height > 0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << calc_height << " meters\n";
        return true;
    }
    else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
        return false;
    }
}


void simBallDrop(int height)
{
    int secondsFallen { 0 };
    while (printBallHeight(height, secondsFallen))
    {
        ++secondsFallen;        
    }
    return;
}


int main()
{
    int userHeightInput = getHeightOfTower();
    simBallDrop(userHeightInput);
    return 0;
}

