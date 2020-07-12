#include <iostream>
#include <cmath>

using namespace std;

double CelToFar (double);

int main()
{
    double celsium;
    cout << "Please, enter temperature in Celsium: ";
    cin >> celsium;
    double fahrenheit = CelToFar(celsium);
    CelToFar(celsium);
    cout << celsium << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit.";
    return 0;
}

double CelToFar(double c)
{
    return c*1.8+32;
}