#include <iostream>
using namespace std;

int main() {
  int n, a = 0, b = 1, temp;

  cout << "n = ";
  cin >> n;

  while (n > 0) {
    temp = a;
    a = b;
    b += temp;
    --n;
  }

  cout << a << endl;

  return 0;
}
