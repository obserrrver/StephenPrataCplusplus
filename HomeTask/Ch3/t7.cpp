#include <iostream>

int main()
{
    using namespace std;
    const double KmToMiles = 0.6214; //1 км в милях
    const double GalonsToAmount = 3.875; //1 галлон в литрах
    double amountOfGas; //количество бензина на 100 км

    cout << "Enter the amount of gas needed for 100 kilometers of the road: ";
    cin >> amountOfGas; 
    double kilometersInOneGallon = (100/(amountOfGas/GalonsToAmount));
    double Miles = kilometersInOneGallon*KmToMiles;
    cout << amountOfGas << " liters of gas/100km = " << Miles << " miles/gallon.";
    return 0;
}