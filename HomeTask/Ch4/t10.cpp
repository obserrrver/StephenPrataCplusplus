#include <iostream>
#include <array>
using namespace std;
int main()
{
    const int NumOfElements = 3;
    array<double, NumOfElements>Running;
    cout << "Enter time of first run: ";
    cin >> Running[0];
    cout << "Enter time of second run: ";
    cin >> Running[1];
    cout << "Enter time of third run: ";
    cin >> Running[2];
    cout << "\nTime 1: " << Running[0]
         << "\nTime 2: " << Running[1]
         << "\nTime 3: " << Running[2]
         << "\nMedium: " << (Running[0]+Running[1]+Running[3])/NumOfElements;
    return 0;
}