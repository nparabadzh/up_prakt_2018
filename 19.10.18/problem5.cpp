#include <iostream>
using namespace std;

int main()
{
    int month, year;
    cout << "Enter a month: ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    bool isLeapYear = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
    int days;
    if(month == 2) {
        days = 28 + isLeapYear;
    }
    else if(month <= 7) {
        days = 30 + (month % 2);
    }
    else {
        days = 31 - (month % 2);
    }
    cout << "The number of days in " << month << " of " << year << " is " << days << endl;
    return 0;
}
