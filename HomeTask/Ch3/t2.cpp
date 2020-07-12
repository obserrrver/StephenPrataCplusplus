#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    const int footToInches = 12;
    const double inchesToMeters = 0.0254;
    const double lbToKilos = 2.2;

    int Foots;
    int Inches;
    int Lbs;

    cout << "Enter your height and weight: \n";
    cout << "Foots:__\b\b";
    cin >> Foots; 
    cout << "Inches:__\b\b";
    cin >> Inches;
    cout << "Lbs:__\b\b";
    cin >> Lbs;

    int heightInInches = Foots*footToInches+Inches;
    cout << "\nYour height in inches: " << heightInInches;
    double heightInMeters = heightInInches*inchesToMeters;
    cout << "\nYour height in meters: " << heightInMeters;
    double weightInKilos =Lbs/lbToKilos;
    cout << "\nYour weight in kilos: " << weightInKilos;
    double BMI = weightInKilos/sqrt(heightInMeters);

    cout << "\n\nYour BMI is: " << BMI;

    return 0;
}