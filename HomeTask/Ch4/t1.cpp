#include <iostream>

int main()
{
    using namespace std;
    const int ArrSize = 30;
    char name[ArrSize];
    char lastName[ArrSize];
    int age;
    char grade;
    cout << "What is you first name? ";
    cin.getline(name, ArrSize);
    cout << "What is your last name? ";
    cin.getline(lastName, ArrSize);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lastName << ", " << name;
    cout << "\nGrade: " << char (grade+1);
    cout << "\nAge: " << age;
    return 0;
}