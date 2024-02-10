#include <iostream>

struct AdSense
{
    int adsWatched {};
    float clickRate {};
    float avrgEarningsPerClick {};

};


void printAdSense(AdSense& adObj)
{
    std::cout << "Total Ads Watched: " << adObj.adsWatched << '\n';
    std::cout << "Ad click rate: " << adObj.clickRate << '\n';
    std::cout << "Average earnings per click: " << adObj.avrgEarningsPerClick << "\n\n";
}


int main()
{
    AdSense googleAd { 5, 0.50, 6.7 };
    AdSense facebookAd {100, 0.90, 10.5 };

    printAdSense(googleAd);
    printAdSense(facebookAd);

    return 0;
}

