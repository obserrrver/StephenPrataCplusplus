#include <iostream>

int main()
{
    using namespace std;
    //cout.setf(ios_base::fixed, ios_base::floatfield);
    long long earthPopulation;
    long long usaPopulation;
    cout << "Enter the worlds population: ";
    cin >> earthPopulation;
    cout << "Enter the population of the US: ";
    cin >> usaPopulation;

    double percentOutOfWorld = ((double)usaPopulation*100)/(double)earthPopulation;
    cout << "The population of the US is " << percentOutOfWorld << "% of the world population";
    return 0;

}