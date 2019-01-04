#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char* reverseWord(char* word) {
    size_t len = strlen(word);
    for(int i=0; i<len/2;i++) {
        int temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
    return word;
}

char* reverseWordsOnly(char* str) {
    size_t len = strlen(str);

    for(int i = 0; i < len; i++) {
        char* word = new char[len + 1];
        int temp = 0;
        if(str[i] == ' ') {
            continue;
        }
        while(str[i] != ' ' && i < len) {
            word[temp] = str[i];
            ++temp;
            ++i;
        }
        i-=temp;
        reverseWord(word);
        for(int j=0; j<temp;j++) {
            str[j+i] = word[j];
        }
        i+=temp;
        --i;
        delete[] word;
    }
    return str;
}


int main() {
    char str[15] = "Hello 124 asd";
    cout << reverseWordsOnly(str) << endl;
    return 0;
}
