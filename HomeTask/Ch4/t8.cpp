#include <iostream>
using namespace std;

struct pizza
{
    /* data */
    char companyName[60];
    int diametre;
    int weight;
};

int main()
{
    pizza* peperoni = new pizza;
    cout << "Enter diametre: ";
    cin >> (*peperoni).diametre;
    cin.get();
    cout << "Enter company name: ";
    cin.getline((*peperoni).companyName, 60);
    cout << "Enter weight: ";
    cin >> (*peperoni).weight;
    cout << "You entered next info about pizza" 
         << "\nCompany name: " << (*peperoni).companyName
         << "\nDiametre of pizza: " << (*peperoni).diametre
         << "\nWeight of pizza: " << (*peperoni).weight;
    delete [] peperoni;
    return 0;
}