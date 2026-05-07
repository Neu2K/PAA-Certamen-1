#include <stdio.h>

int main() {
    char nombre[101];
    scanf("%s", &nombre);
    
    for (int i = 0; nombre[i] != '\0'; i++) {
        if (nombre[i] >= 'A' && nombre[i] <= 'Z') {
            printf("%c", nombre[i]);
        }
    }
    printf("\n");
    return 0;
}