#include <stdio.h>
int main() {
    char chuoi[] = "Banh mi kep thit";

    printf("Chuoi: %s\n", chuoi);
    printf("Tung ky tu cach nhau: ");
    for (int i = 0; chuoi[i] != '\0'; i++){
        printf("%c ", chuoi[i]);
    }
    return 0;
}

