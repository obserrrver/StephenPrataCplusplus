#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char firstName[ArSize];
    char lastName[ArSize];
    char coma[3]= ", ";
    char fullName[60];
    cout << "Enter your first name: ";
    cin.getline(firstName, ArSize);
    cout << "Enter your last name: ";
    cin.getline(lastName, ArSize);
    strcat(lastName, coma);
    strcat(fullName, lastName);
    strcat(fullName, firstName);
    cout << "Here's inforamtion in a single string: " << fullName;
    //or
    // strcpy(fullName, strcat(strcat(lastName, ", "), firstName));
    // cout << "Here's inforamtion in a single string: " << fullName;
    return 0;

}
