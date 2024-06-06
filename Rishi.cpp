#include <iostream>
#include <cstring>
using namespace std;

void concatenate(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len2; i++) { 
        str1[len1 + i] = str2[i]; 
    }
    str1[len1 + len2 + 1] = '\0'; 
}

int main() {
    char str1[20] = "Hello";
    char str2[] = " World!";
    concatenate(str1, str2); 
    cout << str1 << endl;
    return 0;
}
