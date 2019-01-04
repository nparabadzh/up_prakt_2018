#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;

  cout << "n = ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = i * n; j < (i + 1) * n; j++) {
        int k;
        if(i % 2 == 0) {
            k = j + 1;
        }
        else {
            k = (2 * i + 1) * n - j;
        }

      // setw is for fabulousness
      cout << setw(4) << k << " ";
    }

    cout << endl;
  }

  return 0;
}
