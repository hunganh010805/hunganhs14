#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[] = "Hello, world! Welcome to EngC.";
    int wordCount = 0;
    int inWord = 0;
    printf("Chuoi da khai bao: %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1; 
            wordCount++;
        }
    }
    printf("So tu trong chuoi: %d\n", wordCount);
    return 0;
}

