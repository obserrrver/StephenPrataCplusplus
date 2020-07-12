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
    CandyBar * pToCandyBar = new CandyBar [3];
    pToCandyBar[0]={"Candy1", 1.1, 1};
    pToCandyBar[1]={"Candy2", 2.2, 2};
    pToCandyBar[2]={"Candy3", 3.3, 3};

    cout << "\nInfo about 1: " 
         << "\nName: " << pToCandyBar[0].name
         << "\nWeight: " << pToCandyBar[0].weight
         << "\nCallories: " << pToCandyBar[0].callories << endl;
    cout << "\nInfo about 2: " 
         << "\nName: " << pToCandyBar[1].name
         << "\nWeight: " << pToCandyBar[1].weight
         << "\nCallories: " << pToCandyBar[1].callories << endl;
    cout << "\nInfo about 3: " 
         << "\nName: " << pToCandyBar[2].name
         << "\nWeight: " << pToCandyBar[2].weight
         << "\nCallories: " << pToCandyBar[2].callories << endl;   
    delete [] pToCandyBar;  
    return 0;
}