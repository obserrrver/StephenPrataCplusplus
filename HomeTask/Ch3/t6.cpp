#include <iostream>

int main()
{
    using namespace std;
    double pathInKilometers;
    double amountOfGas;

    cout << "Enter your path in kilometers: ";
    cin >> pathInKilometers;
    cout << "Enter the amount of gas you used to cover it: ";
    cin >> amountOfGas;

    double litersFor100Kilometers = (amountOfGas/pathInKilometers)*100;
    cout << "You'll need " << litersFor100Kilometers << " liters of gas for 100 kilometers of road.";
    
    return 0;
}