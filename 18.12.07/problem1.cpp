#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;


char* toUpperCase(char* str) {
  int len = strlen(str); // we need cstring library for this
  for(int i=0; i < len; i++) {
    if(str[i] < 'a' || str[i] > 'z') {
      continue;
    }
    else if(str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - ('a' - 'A');
    }
  }
  return str;
}

char* toLowerCase(char* str) {
  int len = strlen(str);
  for(int i=0; i < len; i++) {
    if(str[i] < 'A' || str[i] > 'Z') {
      continue;
    }
    else if(str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + ('a' - 'A');
    }
  }
  return str;
}


int main() {
  char str[5] = "AzdF";
  toUpperCase(str);
  toLowerCase(str);
  return 0;
}
