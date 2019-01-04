#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = n / 1000;
    int second = n % 100;
    int revert_second = (second % 10) * 10 + second / 10;
    if (first == revert_second) {
        cout << "The number is palindrome!" << endl;
    }
    else {
        cout << "The number is not a palindrome!" << endl;
    }
    return 0;
}
