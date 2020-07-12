#include <iostream>
#include <cmath>

using namespace std;

double LYtoAU (double);

int main()
{
    double lightyears;
    cout << "Enter the number of light years: ";
    cin >> lightyears;
    double astrounits = LYtoAU(lightyears);
    LYtoAU(lightyears);
    cout << lightyears << " light years = " << astrounits << " astronomical units.";
    return 0;
}

double LYtoAU(double y)
{
    return y*63240;
}