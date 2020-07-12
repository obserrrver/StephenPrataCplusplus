#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    /* data */
    string name;
    double weight;
    int callories;
};

int main()
{
    CandyBar snack{"Mocha Munch", 2.3, 350};
    cout << "Name of candy bar: " << snack.name << "\nWeight of candy bar: " << snack.weight << "\nCallories of candy bar: " << snack.callories;
    return 0;
}