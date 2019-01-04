#include <iostream>
using namespace std;

int main() {
  const int targetCount = 50;
  int n = 1, i = 0;

  while (i < targetCount) {
    int temp = n;
    bool isAccepted = true;

    while (temp > 0) {
      int d = temp % 10;
      if (d != 1 && d != 5 && d != 6 && d != 8) {
        isAccepted = false;
        break;
      }

      temp /= 10;
    }

    if (isAccepted) {
      cout << n << endl;
      i++;
    }

    n++;
  }

  return 0;
}

// Alternative solution
/*
int main()
{
    int number = 1;
    for(int i = 1; i <= 50; i++) {
        int temp = number;
        int flag = true;
        while(temp) {
            int digit = temp%10;
            if(digit!=1 && digit!=5 && digit!=6 && digit!=8) {
                flag = false;
                break;
            }
            temp/=10;
        }
        if(flag == true) {
            cout << number << " ";
        }
        else {
            --i;
        }
        ++number;
    }
    return 0;
}
*/
