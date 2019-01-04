#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Ones: " << n % 10 << endl;
    cout << "Tens: " << n / 10 % 10 << endl;
    cout << "Hundreds: " << n / 100 % 10 << endl;
    cout << "Thousands: " << n / 1000 << endl;
    return 0;
}
