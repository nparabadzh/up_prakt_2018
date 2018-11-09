#include <iostream>
using namespace std;
#define size 3

int main()
{
    int arr[size][size];
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
    bool isSymetric = true;
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i][j] != arr[j][i]) {
                isSymetric = false;
                break;
            }
        }
    }
    if (isSymetric == true) {
        cout << "The matrix is Symetric!" << endl;
    }
    else {
        cout << "The matrix is not Symetric!" << endl;
    }
    return 0;
}
