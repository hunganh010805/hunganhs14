#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello, world!"; 
    printf("Chuoi da khai bao: %s\n", str);
    printf("Cac ki tu trong chuoi: ");
    for (size_t i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}

