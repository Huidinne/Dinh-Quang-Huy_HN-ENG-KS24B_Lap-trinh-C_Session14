#include <stdio.h>
int main() {
    char add[10];
    printf("Nhap vao mot chuoi: ");
    fgets(add, 100, stdin);
    int length=0;
    for (int i = 0; add[i] != '\0'; i++) {
        length++;
    }
    printf("Chuoi ban nhap: %s",add);
    printf("Do dai: %d ", length);

    return 0;
}

