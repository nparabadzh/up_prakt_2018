#include <iostream>
// you need to include the following library in order to use the "sqrt" function - square root of the number
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "S: " << S << endl;
    return 0;
}
