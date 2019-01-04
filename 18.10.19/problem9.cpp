#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int reverseNumber = 0;
    while(number) {
        reverseNumber = reverseNumber*10 + number%10;
        number/=10;
    }
    cout << "The reverse number of " << number << " is: " << reverseNumber <<  endl;
    return 0;
}
