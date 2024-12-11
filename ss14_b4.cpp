#include <stdio.h>
int main() {
    char chuoi[] = "Banh mi trung"; 
    char letter; 
    int count = 0;
    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Nhap vao mot ky: ");
    scanf("%c", &letter);
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == letter) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", letter, count);

    return 0;
}

