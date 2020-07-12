#include <iostream>
#include <stdio.h>
using namespace std;
void numsToTime(int, int);

int main()
{
    int hours;
    int minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    numsToTime(hours, minutes);
    cout << endl << "Press e and ENTER to exit ";
    int exit;
    do 
    {
      exit=getchar();
    } while (exit != 'e');
    return 0;
}

void numsToTime(int h, int m)
{
    cout << "Time: " << h <<":" << m;
}
