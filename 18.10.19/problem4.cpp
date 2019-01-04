#include <iostream>
using namespace std;

int main() {
  int n, k;
  bool isPresent = false;

  cout << "n = ";
  cin >> n;
  cout << "k = ";
  cin >> k;

  while (n > 0) {
    if (n % 10 == k) {
      isPresent = true;
      break;
    }
    n /= 10;
  }

  cout << (isPresent ? "YES" : "NO") << endl;

  return 0;
}
