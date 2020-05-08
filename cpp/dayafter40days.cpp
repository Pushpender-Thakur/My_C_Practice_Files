// https://www.w3resource.com/cpp-exercises/basic/cpp-basic-exercise-34.php
// https://www.softwaretestinghelp.com/date-and-time-in-cpp/
// https://www.tutorialcup.com/cplusplus/date-time.htm


#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    time_t now = time(0);
    tm *date_time = localtime(&now);
    int day_after_40_days = (date_time->tm_wday + 40) % 7;
    cout << "Day after 40 days: ";
    switch (day_after_40_days)
    {
    case 0:
        cout << "Sunday";
        break;
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    default:
        cout << "Saturday";
        break;
    }

    cout << endl;
}