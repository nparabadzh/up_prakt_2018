#include <iostream>
using namespace std;

int main()
{
    int seconds;
    const int secondsPerMinute = 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerDay = 24 * 60 * 60;

    cout << "Enter time in seconds: ";
    cin >> seconds;

    cout << seconds / secondsPerDay << "d ";
    cout << seconds % secondsPerDay / secondsPerHour << "h ";
    cout << seconds % secondsPerHour / secondsPerMinute << "m ";
    cout << seconds % secondsPerMinute << "s" << endl;

    return 0;
}
