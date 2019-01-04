#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << "Before: " << n << ", " << m << endl;
    int temp = n;
    n = m;
    m = temp;
    cout << "After: " << n << ", " << m << endl;
    return 0;
}
