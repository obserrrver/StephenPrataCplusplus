#include <iostream>

int main()
{
    using namespace std;
    const char cmToMeters = 100.00;

    int heightInCm;
    cout << "Pls enter your height in cm:___ cm\b\b\b\b\b\b";
    cin >> heightInCm;
    cout << "Your height is: " << heightInCm/cmToMeters << "." << heightInCm%cmToMeters << " meters";

    return 0;
}