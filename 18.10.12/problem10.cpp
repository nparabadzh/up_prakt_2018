#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numInBinary, numInDecimal = 0, count = 0, temp;
    cout << "Enter a binary number: ";
    cin >> numInBinary;
    temp = numInBinary;
    while (numInBinary > 0)
    {
        numInDecimal = numInDecimal + pow(2, count) * (numInBinary % 10);
        numInBinary = numInBinary / 10;
        ++count;
    }
    cout << temp << " in decimal is: " << numInDecimal << endl;
    return 0;
}
