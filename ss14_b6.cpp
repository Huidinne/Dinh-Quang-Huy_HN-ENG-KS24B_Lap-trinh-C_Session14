#include <stdio.h>
int main() {
    char str[] = "2banh mi kep xuc xich!";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
        	count++;
		}
    }
    printf("So chu cai la: %d", count);
    return 0;
}

