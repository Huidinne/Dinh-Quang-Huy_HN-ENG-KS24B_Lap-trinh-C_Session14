#include <stdio.h>
int main() {
    char chuoi[] = "Banh mi kep thit"; 
    int length = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        length++;
    }
    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    return 0;
}

