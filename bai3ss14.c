#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, world!"; 
    printf("Chuoi da khai bao: %s\n", str);
    printf("Chuoi dao nguoc la: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

