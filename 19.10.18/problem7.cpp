#include <iostream>
using namespace std;

int main()
{
    int n;
    do {
        cin >> n;
    }while(n < 0);
    double sum = 1;
    double sign = 1;
    for(int i = 2; i <= n; i++) {
        sign = -sign;
        sum += sign/i;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}
