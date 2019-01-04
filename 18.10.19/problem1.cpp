#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int number;
    int sum = 0;
    int prod = 1;
    while(n) {
        cout << "Enter a number: ";
        cin >> number;
        sum += number;
        prod *= number;
        --n;
    }
    cout << "The sum of all numbers is: " << sum << endl;
    cout << "The product of all numbers is: " << prod << endl;
    return 0;
}
