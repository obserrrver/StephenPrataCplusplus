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
    CandyBar arrayOfCandies[3]=
    {
        {"Bounty", 73.5, 200},
        {"Mars", 83.2, 210},
        {"Lion", 80.1, 220}
    };
    cout << "First snack is: " << arrayOfCandies[0].name 
         << ", its weight is: " << arrayOfCandies[0].weight 
         << " and it has " << arrayOfCandies[0].callories << " callories." << endl

         << "Second snack is: " << arrayOfCandies[1].name 
         << ", its weight is: " << arrayOfCandies[1].weight 
         << " and it has " << arrayOfCandies[1].callories << " callories." << endl

         << "Third snack is: " << arrayOfCandies[2].name 
         << ", its weight is: " << arrayOfCandies[2].weight 
         << " and it has " << arrayOfCandies[2].callories << " callories." << endl;
    return 0;
}