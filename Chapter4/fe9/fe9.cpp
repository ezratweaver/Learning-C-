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


void printBallHeight(int height, int seconds)
{
    double calc_height{ calculateBallHeight(height, seconds) };
    if (calc_height > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << calc_height << " meters\n";
    else 
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}


int main()
{
    int userHeightInput = getHeightOfTower();
    printBallHeight(userHeightInput, 0);
    printBallHeight(userHeightInput, 1);
    printBallHeight(userHeightInput, 2);
    printBallHeight(userHeightInput, 3);
    printBallHeight(userHeightInput, 4);
    printBallHeight(userHeightInput, 5);
    return 0;
}
