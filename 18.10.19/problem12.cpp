#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;

  cout << "n = ";
  cin >> n;

  for (int k = pow(10, n - 1); k < pow(10, n); k++) {
    int temp = k, sum = 0;

    while (temp > 0) {
      sum += pow(temp % 10, n);
      temp /= 10;
    }

    if (k == sum) {
      cout << k << endl;
    }
  }

  return 0;
}
