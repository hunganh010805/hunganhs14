#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Nhap vao mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin); 
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0'; 
    }
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi la: %zu\n", strlen(str));
    return 0;
}
	
	
	
	
	
