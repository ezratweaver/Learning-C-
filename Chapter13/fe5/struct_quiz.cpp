#include <iostream>

struct AdSense
{
    int adsWatched {};
    float clickRate {};
    float avrgEarningsPerClick {};

};


AdSense getAdSenseData()
{
    int adsWatched;
    float clickRate;
    float avrgEarningsPerClick;
    std::cout << "Enter total ads watched: ";
    std::cin >> adsWatched; 
    std::cout << "Enter click rate (float): ";
    std::cin >> clickRate;
    std::cout << "Enter average earnings per click (float): ";
    std::cin >> avrgEarningsPerClick;

    return { adsWatched, clickRate, avrgEarningsPerClick };
}


void printAdSense(AdSense& adObj)
{
    std::cout << "\nTotal Ads Watched: " << adObj.adsWatched << '\n';
    std::cout << "Ad click rate: " << adObj.clickRate << '\n';
    std::cout << "Average earnings per click: " << adObj.avrgEarningsPerClick << "\n\n";

    double dailyEarnings { adObj.adsWatched * adObj.clickRate * adObj.avrgEarningsPerClick };

    std::cout << "Total daily earnings: " << dailyEarnings << "\n\n";
}


int main()
{

    AdSense userObj { getAdSenseData() };
    printAdSense(userObj);

    return 0;
}

