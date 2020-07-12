#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    //const float degreesToMinutes = 60.0000;
    //const float minutesToSeconds = 60.0000;
    const int degreesToMinutes = 60; //не работает, seconndsAndMinutesToDegrees=0.000000, почему? 
    const int minutesToSeconds = 60; //--//--
    int Degrees;
    int Minutes;
    int Seconds;

    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "First, enter the degrees: __\b\b";
    cin >> Degrees;
    cout << "Next, enter the minutes of arc: __\b\b";
    cin >> Minutes;
    cout << "Finally, enter the seconds of arc: __\b\b";
    cin >> Seconds;

    float secondsAndMinutesToDegrees = ((Seconds/(float)minutesToSeconds)/(float)degreesToMinutes) + (Minutes/(float)degreesToMinutes); //почему не преобразуется во флоат, если константа в инт? 
    cout << Degrees << " degrees, " << Minutes << " minutes, " << Seconds << " seconds = " << Degrees+secondsAndMinutesToDegrees << " degrees.";
}