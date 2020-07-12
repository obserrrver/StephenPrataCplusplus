#include <iostream>
#include <array> 
#include <vector>
//Task8
struct fish
    {
        char type[20];
        int weight;
        double lenght;/* data */
    };

int main()
{
    using namespace std;
    //Task1
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea [64];
    //Task2
    array<char, 30> actor2;
    array<short,100>betsie2;
    array<float,13>chuck2;
    array<long double, 64>dipsea2;
    //Task3
    int taskThree[5]={1,3,5,7,9};
    //Task4
    int even = taskThree[0]+taskThree[4];
    cout << "even=" << even;
    //Task5
    float massive[]={1,2,3,4};
    float ideas = massive[1];
    cout << "\nideas=" << ideas;
    //Task6
    char burger[]={"cheeseburger"};
    cout << endl << burger[0];
    //Task7
    string taskSeven = "Waldorf Salad";
    cout << endl << taskSeven;
    //Task9
    struct fish salmon{"salmon", 5, 32.1};
    //Task10
    enum Response{yes=1, no=0, maybe=2};
    //Task11
    double ted=10.5;
    double * pt = &ted;
    cout << endl << *pt;
    cout << endl << pt; 
    //Task12
    float treacle[10]{0,1,2,3,4,5,6,7,8,9};
    float *pnt = treacle;
    cout << endl << *pnt;
    cout << endl << *(pnt+9);
    //Task13
/*     int  numOfElements;
    cout << endl << "Please, enter int: ";
    cin >> numOfElements;
    int *pz = new int [numOfElements];
    vector<int>tsk13(*pz);
    cout << sizeof(tsk13);
    delete [] pz; */
    //Task14
    cout << "\n Task 14\n" << (int *) "Home of the jolly bytes";
    //Task15
    fish * pntForKind = new fish;
    cout << "type of fish: ";
    cin.get(pntForKind->type, 19); 
}