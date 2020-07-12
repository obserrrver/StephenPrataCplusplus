#include <iostream>
#include <cmath>

using namespace std;

int YearsToMonth (int);

int main()
{
    int age;
    cout << "Please, enter your age: " <<endl;
    cin >> age;
    int month = YearsToMonth(age);
    cout << "You are being alive for " << month << " months";
    return 0;
}

int YearsToMonth(int m)
{
    return 12 * m;
}