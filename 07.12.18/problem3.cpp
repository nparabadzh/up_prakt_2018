#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int isNumber(char* str) {
    size_t len = strlen(str);
    for(int i = 0; i < len; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return -1;
        }
    }
    return atoi(str);
}


int main() {
    char str[6] = "20345";
    cout << isNumber(str) << endl;
    return 0;
}
