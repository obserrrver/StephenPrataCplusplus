#include <iostream>
#include <string>
using namespace std;

struct pizza
{
    /* data */
    string companyName;
    int diametre;
    int weight;
};

int main()
{
    pizza newPizza;
    cout << "Enter company name: ";
    getline(cin, newPizza.companyName);
    cout << "Enter diametre: ";
    cin >> newPizza.diametre;
    cout << "Enter weight: ";
    cin >> newPizza.weight;
    cout << "You entered next info about pizza" 
         << "\nCompany name: " << newPizza.companyName
         << "\nDiametre of pizza: " << newPizza.diametre
         << "\nWeight of pizza: " << newPizza.weight;
    return 0;
}
