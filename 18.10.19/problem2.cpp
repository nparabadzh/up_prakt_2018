#include <iostream>
using namespace std;

int main() {

  int n, current, result = 0;
  cout << "n = ";
  cin >> n;
  while (n > 0) {
    cin >> current;

    if (current % 2 == 0) {
      result += current * current;
    }
    
    --n;
  }

  cout << result << endl;

  return 0;
}
