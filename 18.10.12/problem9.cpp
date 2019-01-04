#include <iostream>
using namespace std;

int main()
{
    int numInDecimal, remainder, a = 1, temp;
    long int numInBinary = 0;
    cout << "Enter a number: ";
    cin >> numInDecimal;
    temp = numInDecimal;
    while(numInDecimal > 0)
    {
        remainder = numInDecimal % 2;
        numInDecimal = numInDecimal / 2;
        numInBinary = numInBinary + (a * remainder);
        a = a * 10;
    }
    cout << temp << " in binary is: " << numInBinary << endl;
    return 0;
}
