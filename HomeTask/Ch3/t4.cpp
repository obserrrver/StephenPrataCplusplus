#include <iostream>

int main()
{
    using namespace std;
    const int hoursInDay = 24;
    const int minutesInHour = 60;
    const int secondsInMinutes = 60;

    long Seconds;

    cout << "Enter the number of seconds: ";
    cin >> Seconds;

    int Days = Seconds/(secondsInMinutes*minutesInHour*hoursInDay);
    //cout << Days << endl;
    int Hours = (Seconds-(Days*hoursInDay*minutesInHour*secondsInMinutes))/(secondsInMinutes*minutesInHour);
    //cout << Hours << endl;
    int Minutes = (Seconds-(Days*hoursInDay*minutesInHour*secondsInMinutes)-(Hours*minutesInHour*secondsInMinutes))/(secondsInMinutes);
    //cout << Minutes << endl;
    int lastSeconds = (Seconds-(Days*hoursInDay*minutesInHour*secondsInMinutes)-(Hours*minutesInHour*secondsInMinutes)-(Minutes*secondsInMinutes));
    //cout << lastSeconds << endl;
    cout << Seconds << " seconds = " << Days << " days, " << Hours << " hours, " << Minutes << " minutes, " << lastSeconds << " seconds.";
    return 0;

}