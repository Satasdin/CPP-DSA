// Question 1
// Program to find the number of seconds in a given number of days.

#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "How many days? ";
    cin >> days;

    // 1 day = 24 hours, 1 hour = 60 minutes, 1 minute = 60 seconds
    int secondsInOneDay = 24 * 60 * 60;
    int totalSeconds = days * secondsInOneDay;

    cout << days << " day(s) has " << totalSeconds << " seconds." << endl;

    return 0;
}
